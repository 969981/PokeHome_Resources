/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00100440; name: realloc
 */


void * realloc(void *__ptr,size_t __size)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  void *pvVar4;
  
  lVar1 = FUN__text__005f52b0();
  plVar2 = (long *)(*(code *)**(undefined8 **)(lVar1 + 8))();
  plVar3 = (long *)FUN__text__001020a4();
  if (plVar3 != plVar2) {
    do {
      plVar2 = (long *)*plVar2;
    } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
    if (plVar2 == (long *)0x0) {
      lVar1 = 0;
    }
  }
  FUN__text__005f5500();
  pvVar4 = (void *)FUN__text__001004c0(lVar1,__ptr,__size);
  return pvVar4;
}


