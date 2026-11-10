/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a5af0; name: FUN_.text__002a5af0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002a5af0(long *param_1)

{
  ulong uVar1;
  undefined8 *__s;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long local_48;
  long *local_28;
  
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
  lVar5 = _DAT_008a2348;
  if (uVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if (*(long *)(uVar1 + 0x98) != 0) {
      lVar2 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  plVar6 = param_1 + 0xb;
  *plVar6 = 0;
  *param_1 = lVar5 + 0x10;
  param_1[1] = lVar2;
  param_1[9] = lVar5 + 0x48;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  plVar4 = *(long **)(DAT_008e1518 + 0x248);
  local_28 = plVar4;
  __s = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x130,0x10);
  if (*(long *)(uVar1 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x18) = plVar4;
  *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
  memset(__s,0,0x130);
  __s[0x14] = 0;
  __s[0x15] = 0;
  *__s = 0x879f08;
  __s[0x16] = 0;
  __s[0x17] = 0;
  __s[4] = 0;
  __s[5] = 0;
  lVar5 = _DAT_0089f6e0;
  __s[6] = 0;
  __s[7] = 0;
  __s[2] = lVar5 + 0x10;
  __s[3] = 0;
  *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + -1;
  lVar5 = *plVar6;
  *plVar6 = (long)__s;
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x10) = _DAT_0089f718 + 0x10;
    if (*(long *)(lVar5 + 0x18) == 0) {
      *(undefined8 *)(lVar5 + 0x18) = 0;
      pcVar3 = *(code **)(lVar5 + 0xa8);
    }
    else {
      FUN__text__005d9290();
      lVar2 = *(long *)(lVar5 + 0x18);
      *(undefined8 *)(lVar5 + 0x18) = 0;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      pcVar3 = *(code **)(lVar5 + 0xa8);
    }
    if (pcVar3 != (code *)0x0) {
      *(undefined8 *)(lVar5 + 0xb0) = 0;
      *(undefined8 *)(lVar5 + 0xb8) = 0;
      *(undefined8 *)(lVar5 + 0xa0) = 0;
      *(undefined8 *)(lVar5 + 0xa8) = 0;
      (*pcVar3)(lVar5 + 0xc0);
    }
    pcVar3 = *(code **)(lVar5 + 0x28);
    if (pcVar3 != (code *)0x0) {
      *(undefined8 *)(lVar5 + 0x30) = 0;
      *(undefined8 *)(lVar5 + 0x38) = 0;
      *(undefined8 *)(lVar5 + 0x20) = 0;
      *(undefined8 *)(lVar5 + 0x28) = 0;
      (*pcVar3)(lVar5 + 0x40);
    }
    if (*(long *)(lVar5 + 0x18) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar5 + 0x18) + 0x48) + 0x18))();
      *(undefined8 *)(lVar5 + 0x18) = 0;
    }
    (**(code **)(*(long *)param_1[0xc] + 0x18))
              ((long *)param_1[0xc],lVar5,param_1[0xd],param_1[0xe]);
    __s = (undefined8 *)param_1[0xb];
  }
  plVar6 = local_28;
  param_1[0xc] = (long)plVar4;
  param_1[0xd] = 0x130;
  param_1[0xe] = 0x10;
  FUN__text__002a60d8(__s,local_28);
  FUN__text__002a5d40(&local_48,plVar6,&local_28);
  if (param_1[0xf] != 0) {
    (**(code **)(*(long *)(param_1[0xf] + 0x48) + 0x18))();
  }
  param_1[0xf] = local_48;
  FUN__text__002c522c(local_48,local_28);
  return;
}


