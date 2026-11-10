/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005eef20; name: FUN_.text__005eef20
 */


undefined8 FUN__text__005eef20(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 uStack_11;
  
  lVar5 = *param_1;
  lVar3 = *(long *)(*(long *)(lVar5 + 0x68) + 0x278);
  if ((lVar3 != 0) && (puVar4 = *(undefined8 **)(lVar3 + 0x60), puVar4 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar4)(puVar4);
    plVar2 = (long *)FUN__text__00149ac0();
    if (plVar2 != plVar1) {
      do {
        plVar1 = (long *)*plVar1;
      } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
      if (plVar1 == (long *)0x0) {
        return 0;
      }
    }
    lVar3 = FUN__text__005cb660(puVar4 + -10,&uStack_11);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x78) != 0)) {
      *(undefined4 *)(*(long *)(lVar5 + 600) + 0xfc) =
           *(undefined4 *)(*(long *)(lVar3 + 0x78) + 0x2b4);
    }
  }
  return 0;
}


