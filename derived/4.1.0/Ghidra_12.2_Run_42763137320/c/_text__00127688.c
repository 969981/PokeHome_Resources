/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00127688; name: FUN_.text__00127688
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00127688(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long local_50;
  long *local_48;
  
  param_1[7] = 0;
  lVar5 = _DAT_0089f690;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar5 + 0x10;
  if ((uVar1 == 0) || (*(long *)(uVar1 + 0x98) == 0)) {
    local_48 = (long *)0x0;
  }
  else {
    local_48 = *(long **)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[9] = 0x869220;
  *param_1 = 0x8691e8;
  param_1[1] = (long)local_48;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  if (((uVar1 == 0) || (*(long *)(uVar1 + 0x98) == 0)) ||
     (lVar5 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar5 == 0)) {
    lVar5 = FUN__text__005f52b0();
    local_48 = (long *)param_1[1];
  }
  param_1[0x12] = lVar5;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN__text__001279f4(&local_50,local_48,&local_48);
  if (param_1[0x17] != 0) {
    (**(code **)(*(long *)(param_1[0x17] + 0x48) + 0x18))();
  }
  plVar3 = local_48;
  param_1[0x17] = local_50;
  if (*(long *)(uVar1 + 0x98) != 0x10) {
    lVar5 = uVar1 + 0x18;
    *(long **)(lVar5 + *(long *)(uVar1 + 0x98) * 8) = local_48;
    *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
    plVar4 = (long *)(**(code **)(*local_48 + 0x10))(local_48,0x640,0x10);
    if (plVar4 == (long *)0x0) {
      (**(code **)(*plVar3 + 0xb8))(plVar3);
    }
    FUN__text__001281fc(plVar4,param_1,0x71cb8b,0);
    lVar2 = _DAT_0089fa30;
    plVar4[9] = _DAT_0089fa30 + 0xa8;
    plVar4[10] = lVar2 + 0xe8;
    *plVar4 = lVar2 + 0x10;
    plVar4[1] = (long)plVar3;
    plVar4[2] = (long)plVar4;
    plVar4[3] = 0x640;
    plVar4[4] = 0x10;
    *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + -1;
    (**(code **)(plVar4[9] + 0x10))();
    if (param_1[0xc] != 0) {
      (**(code **)(*(long *)(param_1[0xc] + 0x48) + 0x18))();
    }
    plVar3 = local_48;
    param_1[0xc] = (long)plVar4;
    if (*(long *)(uVar1 + 0x98) != 0x10) {
      *(long **)(lVar5 + *(long *)(uVar1 + 0x98) * 8) = local_48;
      *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
      plVar4 = (long *)(**(code **)(*local_48 + 0x10))(local_48,0x640,0x10);
      if (plVar4 == (long *)0x0) {
        (**(code **)(*plVar3 + 0xb8))(plVar3);
      }
      FUN__text__001281fc(plVar4,param_1,0x71445a,0);
      plVar4[9] = lVar2 + 0xa8;
      plVar4[10] = lVar2 + 0xe8;
      *plVar4 = lVar2 + 0x10;
      plVar4[1] = (long)plVar3;
      plVar4[2] = (long)plVar4;
      plVar4[3] = 0x640;
      plVar4[4] = 0x10;
      *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + -1;
      (**(code **)(plVar4[9] + 0x10))();
      if (param_1[0xd] != 0) {
        (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
      }
      plVar3 = local_48;
      param_1[0xd] = (long)plVar4;
      if (*(long *)(uVar1 + 0x98) != 0x10) {
        *(long **)(lVar5 + *(long *)(uVar1 + 0x98) * 8) = local_48;
        *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
        plVar4 = (long *)(**(code **)(*local_48 + 0x10))(local_48,0x640,0x10);
        if (plVar4 == (long *)0x0) {
          (**(code **)(*plVar3 + 0xb8))(plVar3);
        }
        FUN__text__001281fc(plVar4,param_1,0x71027f,0);
        plVar4[9] = lVar2 + 0xa8;
        *plVar4 = lVar2 + 0x10;
        plVar4[1] = (long)plVar3;
        plVar4[2] = (long)plVar4;
        plVar4[3] = 0x640;
        plVar4[10] = lVar2 + 0xe8;
        plVar4[4] = 0x10;
        *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + -1;
        (**(code **)(plVar4[9] + 0x10))();
        if (param_1[0xe] != 0) {
          (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
        }
        param_1[0xe] = (long)plVar4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


