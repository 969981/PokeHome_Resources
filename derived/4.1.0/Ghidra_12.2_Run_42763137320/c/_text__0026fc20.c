/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0026fc20; name: FUN_.text__0026fc20
 */


void FUN__text__0026fc20(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_34;
  
  uVar2 = FUN__text__00132134(*(undefined8 *)(param_1 + 0x80));
  if ((uVar2 & 1) != 0) {
    iVar1 = FUN__text__00132530(*(undefined8 *)(param_1 + 0x80));
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x78) = 0;
      return;
    }
    if (iVar1 == 0) {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
      plVar3 = (long *)(**(code **)*puVar5)(puVar5);
      plVar4 = (long *)FUN__text__0012615c();
      if (plVar4 != plVar3) {
        do {
          plVar3 = (long *)*plVar3;
        } while (plVar3 != plVar4 && plVar3 != (long *)0x0);
      }
      *(undefined4 *)puVar5[0x13e] = 2;
      FUN__text__003236f0();
      local_34 = 1;
      local_48 = *(undefined8 *)(param_1 + 0x100);
      uStack_40 = 0;
      local_38 = 0x1000100;
      plVar3 = (long *)(*(long *)(*(long *)(param_1 + 0x80) + 0x640) + 0x60);
      (**(code **)(*plVar3 + 8))(plVar3,1);
      FUN__text__00131da0(*(undefined8 *)(param_1 + 0x80),&local_48);
      FUN__text__00128ec0(*(undefined8 *)(param_1 + 0x80),0);
      *(undefined4 *)(param_1 + 0x78) = 5;
    }
  }
  return;
}


