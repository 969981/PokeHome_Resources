/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a8780; name: FUN_.text__002a8780
 */


void FUN__text__002a8780(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  FUN__text__002a8c9c();
  FUN__text__002a8d20(&local_60,param_2);
  plVar1 = local_60;
  local_60 = (long *)0x0;
  plVar8 = *(long **)(param_1 + 2000);
  *(long **)(param_1 + 2000) = plVar1;
  if (plVar8 == (long *)0x0) {
    *(long **)(param_1 + 0x7d8) = local_58;
    *(undefined8 *)(param_1 + 0x7e0) = local_50;
    *(undefined8 *)(param_1 + 0x7e8) = local_48;
    if (*(long *)(param_1 + 0x68) == 0) goto LAB__text__002a89dc;
LAB__text__002a88c8:
    iVar2 = FUN__text__005dc81c();
    iVar3 = 0;
    iVar4 = iVar2;
    if (*(long *)(param_1 + 0x178) != 0) {
LAB__text__002a88d8:
      iVar2 = iVar4;
      iVar3 = FUN__text__005dc81c();
    }
  }
  else {
    plVar1 = (long *)plVar8[5];
    while (plVar1 != (long *)0x0) {
      lVar9 = *plVar1;
      (**(code **)(*(long *)plVar8[6] + 0x18))((long *)plVar8[6],plVar1,0x20,8);
      plVar1 = (long *)lVar9;
    }
    lVar9 = *plVar8;
    *plVar8 = 0;
    if (lVar9 != 0) {
      (**(code **)(*(long *)plVar8[2] + 0x18))((long *)plVar8[2],lVar9,plVar8[1] << 3,8);
    }
    (**(code **)(**(long **)(param_1 + 0x7d8) + 0x18))
              (*(long **)(param_1 + 0x7d8),plVar8,*(undefined8 *)(param_1 + 0x7e0),
               *(undefined8 *)(param_1 + 0x7e8));
    plVar1 = local_60;
    local_60 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x7e8) = local_48;
    *(long **)(param_1 + 0x7d8) = local_58;
    *(undefined8 *)(param_1 + 0x7e0) = local_50;
    if (plVar1 != (long *)0x0) {
      plVar8 = (long *)plVar1[5];
      while (plVar8 != (long *)0x0) {
        lVar9 = *plVar8;
        (**(code **)(*(long *)plVar1[6] + 0x18))((long *)plVar1[6],plVar8,0x20,8);
        plVar8 = (long *)lVar9;
      }
      lVar9 = *plVar1;
      *plVar1 = 0;
      if (lVar9 != 0) {
        (**(code **)(*(long *)plVar1[2] + 0x18))((long *)plVar1[2],lVar9,plVar1[1] << 3,8);
      }
      (**(code **)(*local_58 + 0x18))(local_58,plVar1,local_50,local_48);
    }
    if (*(long *)(param_1 + 0x68) != 0) goto LAB__text__002a88c8;
LAB__text__002a89dc:
    iVar2 = 0;
    iVar4 = 0;
    if (*(long *)(param_1 + 0x178) != 0) goto LAB__text__002a88d8;
    iVar3 = 0;
  }
  iVar4 = 0;
  if (*(long *)(param_1 + 0x288) != 0) {
    iVar4 = FUN__text__005dc81c();
  }
  lVar9 = *(long *)(param_1 + 2000);
  uVar10 = (ulong)((float)(ulong)(long)(iVar2 + iVar3 + iVar4) / *(float *)(lVar9 + 0x50));
  if (uVar10 - 1 == 0) {
    uVar10 = 2;
  }
  else if ((uVar10 & uVar10 - 1) != 0) {
    uVar10 = std::__next_prime(uVar10);
  }
  uVar11 = *(ulong *)(lVar9 + 8);
  if (uVar11 < uVar10) {
LAB__text__002a8a00:
    FUN__text__002a9690(lVar9,uVar10);
  }
  else if (uVar10 < uVar11) {
    uVar6 = (ulong)((float)*(ulong *)(lVar9 + 0x48) / *(float *)(lVar9 + 0x50));
    if ((uVar11 < 3) ||
       (uVar7 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
       uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333),
       1 < (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
      uVar6 = std::__next_prime(uVar6);
      if (uVar10 <= uVar6) {
        uVar10 = uVar6;
      }
    }
    else {
      if (1 < uVar6) {
        uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
      }
      if (uVar10 <= uVar6) {
        uVar10 = uVar6;
      }
    }
    if (uVar10 < uVar11) goto LAB__text__002a8a00;
  }
  FUN__text__002a8e40(&local_60,param_2);
  plVar1 = local_60;
  local_60 = (long *)0x0;
  plVar8 = *(long **)(param_1 + 0x7f0);
  *(long **)(param_1 + 0x7f0) = plVar1;
  if (plVar8 == (long *)0x0) {
    *(long **)(param_1 + 0x7f8) = local_58;
    *(undefined8 *)(param_1 + 0x800) = local_50;
    *(undefined8 *)(param_1 + 0x808) = local_48;
    if (*(long *)(param_1 + 0x398) == 0) goto LAB__text__002a8c4c;
LAB__text__002a8b28:
    iVar2 = FUN__text__005dc81c();
    iVar3 = 0;
    iVar4 = iVar2;
    if (*(long *)(param_1 + 0x4a8) != 0) {
LAB__text__002a8b38:
      iVar2 = iVar4;
      iVar3 = FUN__text__005dc81c();
    }
  }
  else {
    plVar1 = (long *)plVar8[5];
    while (plVar1 != (long *)0x0) {
      lVar9 = *plVar1;
      (**(code **)(*(long *)plVar8[6] + 0x18))((long *)plVar8[6],plVar1,0x20,8);
      plVar1 = (long *)lVar9;
    }
    lVar9 = *plVar8;
    *plVar8 = 0;
    if (lVar9 != 0) {
      (**(code **)(*(long *)plVar8[2] + 0x18))((long *)plVar8[2],lVar9,plVar8[1] << 3,8);
    }
    (**(code **)(**(long **)(param_1 + 0x7f8) + 0x18))
              (*(long **)(param_1 + 0x7f8),plVar8,*(undefined8 *)(param_1 + 0x800),
               *(undefined8 *)(param_1 + 0x808));
    plVar1 = local_60;
    local_60 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x808) = local_48;
    *(long **)(param_1 + 0x7f8) = local_58;
    *(undefined8 *)(param_1 + 0x800) = local_50;
    if (plVar1 != (long *)0x0) {
      plVar8 = (long *)plVar1[5];
      while (plVar8 != (long *)0x0) {
        lVar9 = *plVar8;
        (**(code **)(*(long *)plVar1[6] + 0x18))((long *)plVar1[6],plVar8,0x20,8);
        plVar8 = (long *)lVar9;
      }
      lVar9 = *plVar1;
      *plVar1 = 0;
      if (lVar9 != 0) {
        (**(code **)(*(long *)plVar1[2] + 0x18))((long *)plVar1[2],lVar9,plVar1[1] << 3,8);
      }
      (**(code **)(*local_58 + 0x18))(local_58,plVar1,local_50,local_48);
    }
    if (*(long *)(param_1 + 0x398) != 0) goto LAB__text__002a8b28;
LAB__text__002a8c4c:
    iVar2 = 0;
    iVar4 = 0;
    if (*(long *)(param_1 + 0x4a8) != 0) goto LAB__text__002a8b38;
    iVar3 = 0;
  }
  iVar4 = 0;
  if (*(long *)(param_1 + 0x5b8) != 0) {
    iVar4 = FUN__text__005dc81c();
  }
  iVar5 = 0;
  if (*(long *)(param_1 + 0x6c8) != 0) {
    iVar5 = FUN__text__005dc81c();
  }
  lVar9 = *(long *)(param_1 + 0x7f0);
  uVar10 = (ulong)((float)(ulong)(long)(iVar2 + iVar3 + iVar4 + iVar5) / *(float *)(lVar9 + 0x50));
  if (uVar10 - 1 == 0) {
    uVar10 = 2;
  }
  else if ((uVar10 & uVar10 - 1) != 0) {
    uVar10 = std::__next_prime(uVar10);
  }
  uVar11 = *(ulong *)(lVar9 + 8);
  if (uVar10 <= uVar11) {
    if (uVar11 <= uVar10) goto LAB__text__002a8c7c;
    uVar6 = (ulong)((float)*(ulong *)(lVar9 + 0x48) / *(float *)(lVar9 + 0x50));
    if ((uVar11 < 3) ||
       (uVar7 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
       uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333),
       1 < (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
      uVar6 = std::__next_prime(uVar6);
      if (uVar10 <= uVar6) {
        uVar10 = uVar6;
      }
    }
    else {
      if (1 < uVar6) {
        uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
      }
      if (uVar10 <= uVar6) {
        uVar10 = uVar6;
      }
    }
    if (uVar11 <= uVar10) goto LAB__text__002a8c7c;
  }
  FUN__text__002ada70(lVar9,uVar10);
LAB__text__002a8c7c:
  *(undefined1 *)(param_1 + 0x810) = 1;
  return;
}


