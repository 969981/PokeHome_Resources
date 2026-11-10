/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003af6c0; name: FUN_.text__003af6c0
 */


void FUN__text__003af6c0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *local_38;
  undefined8 uStack_30;
  long local_28;
  
  if (*(char *)(param_1 + 0x850) != '\0') {
    lVar2 = *(long *)(param_1 + 0x800);
    uVar1 = FUN__text__003b7414(lVar2,*(undefined4 *)(lVar2 + 0x14),*(undefined4 *)(lVar2 + 0x10));
    puVar3 = (undefined8 *)FUN__text__003b8e30(param_1 + 0x788,uVar1);
    if (puVar3 != (undefined8 *)0x0) {
      uStack_30 = *puVar3;
      local_38 = &local_28;
      local_28 = 0;
      FUN__text__003aa1c0(param_1,&local_38,0);
      lVar2 = local_28;
      if (local_28 != 0) {
        plVar4 = (long *)(*(code *)**(undefined8 **)(local_28 + 0x50))();
        plVar5 = (long *)FUN__text__0012ea34();
        if (plVar5 != plVar4) {
          do {
            plVar4 = (long *)*plVar4;
          } while (plVar4 != plVar5 && plVar4 != (long *)0x0);
          if (plVar4 == (long *)0x0) {
            return;
          }
        }
        FUN__text__003a23f4(lVar2);
      }
    }
  }
  return;
}


