# compiles UI pacakge and sub-packages:
#  - .java files -> .class files
# creates ui.jar from .class files, then removes .class files

UI=ui/ui.jar
UI_CLASSES=ui/UIPrompter.class ui/text/TextPrompter.class
APP=app.jar
APP_CLASSES=common/Main.class common/Other.class
CP=.

%.class: %.java
	@echo "[Compiling $< to $@]"
	@javac -cp ${CP} $<

${APP}: ${APP_CLASSES} ${UI}
	@echo "[Creating jar - $@]"
	@jar cvf $@ ${APP_CLASSES}
	@rm -f ${APP_CLASSES}

${UI}: ${UI_CLASSES}
	@echo "[Creating jar - $@]"
	@jar cvf $@ $^
	@rm -f ${UI_CLASSES}

.PHONY: run
run: ${APP}
	@echo "[*** Running App ***]"
	@java -cp ui/ui.jar:app.jar common.Main

.PHONY: clean
clean:
	@rm -f ${UI} ${UI_CLASSES}