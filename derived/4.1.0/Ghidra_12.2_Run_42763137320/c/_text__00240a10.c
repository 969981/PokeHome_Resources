/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00240a10; name: FUN_.text__00240a10
 */


void FUN__text__00240a10(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined6 local_d0;
  undefined2 uStack_ca;
  undefined6 uStack_c8;
  undefined8 local_c0;
  undefined6 uStack_b8;
  undefined2 local_b2;
  undefined6 uStack_b0;
  undefined2 local_aa;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined2 local_50;
  undefined8 local_4c;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_1 + 0x88);
  if (*(int *)(lVar2 + 0x6f0) != *(int *)(lVar2 + 0x6ec)) {
    local_40 = *(undefined8 *)(lVar2 + 0x6d8);
    uStack_38 = *(undefined8 *)(lVar2 + 0x6e0);
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_ca = 0;
    uStack_c8 = 0;
    local_9c = 0;
    local_98 = 0;
    local_4c = 0;
    local_a0 = 0;
    local_a8 = 0;
    local_50 = 0;
    local_aa = 0x101;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b2 = 0;
    uStack_b0 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    FUN__text__0024591c(lVar2,&local_e0,*(int *)(lVar2 + 0x6f0),&local_40);
    iVar1 = FUN__text__00241bc0(param_1,&local_e0);
    if (iVar1 != 0) {
      FUN__text__00241820(param_1,iVar1);
      *(undefined8 *)(param_1 + 0x78) = 10;
      return;
    }
  }
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 == (undefined8 *)0x0)) {
LAB__text__00240b64:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  plVar3 = (long *)(**(code **)*puVar5)(puVar5);
  plVar4 = (long *)FUN__text__0023e748();
  if (plVar4 != plVar3) {
    do {
      plVar3 = (long *)*plVar3;
    } while (plVar3 != plVar4 && plVar3 != (long *)0x0);
    if (plVar3 == (long *)0x0) goto LAB__text__00240b64;
  }
  if (*(int *)(puVar5[2] + 4) == 2) {
    *(undefined4 *)(param_1 + 0x78) = 0xb;
    return;
  }
  FUN__text__00241620(param_1);
  *(undefined4 *)(param_1 + 0x78) = 1;
  return;
}


