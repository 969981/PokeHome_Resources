/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001aaa0c; name: FUN_.text__001aaa0c
 */


void FUN__text__001aaa0c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  puVar1 = (undefined8 *)(param_1 + 0x20);
  lVar2 = FUN__text__00195844(uVar4,*(undefined4 *)(param_1 + 0x24));
  if (*(int *)(lVar2 + 0xc) != 1) {
    local_58 = *puVar1;
    uStack_50 = *(undefined8 *)(param_1 + 0x28);
    local_48 = *(undefined4 *)(param_1 + 0x30);
    FUN__text__001aa7a0(lVar3,&local_58);
  }
  FUN__text__0019555c(uVar4,puVar1);
  if (**(int **)(lVar3 + 0x38) == 1) {
    uVar5 = *(undefined8 *)(lVar3 + 0x10);
    uVar4 = FUN__text__00196200(uVar5,*(undefined4 *)(param_1 + 0x24));
    if (*(char *)(param_1 + 0x20) == '\0') {
      lVar3 = FUN__text__00195358(uVar5,puVar1);
      local_40 = *(undefined8 *)(lVar3 + 8);
      uStack_38 = *(undefined8 *)(lVar3 + 0x10);
      lVar3 = FUN__text__00192680(uVar4,&local_40);
    }
    else {
      lVar3 = FUN__text__0019264c(uVar4,param_1 + 0x2c);
    }
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x18) = 0;
    }
  }
  return;
}


