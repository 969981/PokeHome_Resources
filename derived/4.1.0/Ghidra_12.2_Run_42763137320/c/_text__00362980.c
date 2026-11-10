/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00362980; name: FUN_.text__00362980
 */


void FUN__text__00362980(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  FUN__text__00362ea4();
  FUN__text__002a8d20(&local_60,param_2);
  plVar1 = local_60;
  local_60 = (long *)0x0;
  plVar9 = *(long **)(param_1 + 0x8e0);
  *(long **)(param_1 + 0x8e0) = plVar1;
  if (plVar9 == (long *)0x0) {
    *(long **)(param_1 + 0x8e8) = local_58;
    *(undefined8 *)(param_1 + 0x8f0) = local_50;
    *(undefined8 *)(param_1 + 0x8f8) = local_48;
    if (*(long *)(param_1 + 0x68) != 0) goto LAB__text__00362ac8;
LAB__text__00362bfc:
    iVar2 = 0;
    iVar4 = 0;
    if (*(long *)(param_1 + 0x178) == 0) {
      iVar3 = 0;
    }
    else {
LAB__text__00362ad8:
      iVar2 = iVar4;
      iVar3 = FUN__text__005dc81c();
    }
  }
  else {
    plVar1 = (long *)plVar9[5];
    while (plVar1 != (long *)0x0) {
      lVar10 = *plVar1;
      (**(code **)(*(long *)plVar9[6] + 0x18))((long *)plVar9[6],plVar1,0x20,8);
      plVar1 = (long *)lVar10;
    }
    lVar10 = *plVar9;
    *plVar9 = 0;
    if (lVar10 != 0) {
      (**(code **)(*(long *)plVar9[2] + 0x18))((long *)plVar9[2],lVar10,plVar9[1] << 3,8);
    }
    (**(code **)(**(long **)(param_1 + 0x8e8) + 0x18))
              (*(long **)(param_1 + 0x8e8),plVar9,*(undefined8 *)(param_1 + 0x8f0),
               *(undefined8 *)(param_1 + 0x8f8));
    plVar1 = local_60;
    local_60 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x8f8) = local_48;
    *(long **)(param_1 + 0x8e8) = local_58;
    *(undefined8 *)(param_1 + 0x8f0) = local_50;
    if (plVar1 != (long *)0x0) {
      plVar9 = (long *)plVar1[5];
      while (plVar9 != (long *)0x0) {
        lVar10 = *plVar9;
        (**(code **)(*(long *)plVar1[6] + 0x18))((long *)plVar1[6],plVar9,0x20,8);
        plVar9 = (long *)lVar10;
      }
      lVar10 = *plVar1;
      *plVar1 = 0;
      if (lVar10 != 0) {
        (**(code **)(*(long *)plVar1[2] + 0x18))((long *)plVar1[2],lVar10,plVar1[1] << 3,8);
      }
      (**(code **)(*local_58 + 0x18))(local_58,plVar1,local_50,local_48);
    }
    if (*(long *)(param_1 + 0x68) == 0) goto LAB__text__00362bfc;
LAB__text__00362ac8:
    iVar2 = FUN__text__005dc81c();
    iVar3 = 0;
    iVar4 = iVar2;
    if (*(long *)(param_1 + 0x178) != 0) goto LAB__text__00362ad8;
  }
  iVar4 = 0;
  if (*(long *)(param_1 + 0x288) != 0) {
    iVar4 = FUN__text__005dc81c();
  }
  iVar5 = 0;
  if (*(long *)(param_1 + 0x398) != 0) {
    iVar5 = FUN__text__005dc81c();
  }
  iVar6 = 0;
  if (*(long *)(param_1 + 0x4a8) != 0) {
    iVar6 = FUN__text__005dc81c();
  }
  lVar10 = *(long *)(param_1 + 0x8e0);
  uVar11 = (ulong)((float)(ulong)(long)(iVar2 + iVar3 + iVar4 + iVar5 + iVar6) /
                  *(float *)(lVar10 + 0x50));
  if (uVar11 - 1 == 0) {
    uVar11 = 2;
  }
  else if ((uVar11 & uVar11 - 1) != 0) {
    uVar11 = std::__next_prime(uVar11);
  }
  uVar12 = *(ulong *)(lVar10 + 8);
  if (uVar12 < uVar11) {
LAB__text__00362c20:
    FUN__text__002a9690(lVar10,uVar11);
  }
  else if (uVar11 < uVar12) {
    uVar7 = (ulong)((float)*(ulong *)(lVar10 + 0x48) / *(float *)(lVar10 + 0x50));
    if ((uVar12 < 3) ||
       (uVar8 = uVar12 - (uVar12 >> 1 & 0x5555555555555555),
       uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333),
       1 < (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
      uVar7 = std::__next_prime(uVar7);
      if (uVar11 <= uVar7) {
        uVar11 = uVar7;
      }
    }
    else {
      if (1 < uVar7) {
        uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
      }
      if (uVar11 <= uVar7) {
        uVar11 = uVar7;
      }
    }
    if (uVar11 < uVar12) goto LAB__text__00362c20;
  }
  FUN__text__002a8e40(&local_60,param_2);
  plVar1 = local_60;
  local_60 = (long *)0x0;
  plVar9 = *(long **)(param_1 + 0x900);
  *(long **)(param_1 + 0x900) = plVar1;
  if (plVar9 == (long *)0x0) {
    *(long **)(param_1 + 0x908) = local_58;
    *(undefined8 *)(param_1 + 0x910) = local_50;
    *(undefined8 *)(param_1 + 0x918) = local_48;
    if (*(long *)(param_1 + 0x5b8) != 0) goto LAB__text__00362d48;
LAB__text__00362e5c:
    iVar2 = 0;
    iVar4 = 0;
    if (*(long *)(param_1 + 0x6c8) == 0) {
      iVar3 = 0;
      goto LAB__text__00362d5c;
    }
  }
  else {
    plVar1 = (long *)plVar9[5];
    while (plVar1 != (long *)0x0) {
      lVar10 = *plVar1;
      (**(code **)(*(long *)plVar9[6] + 0x18))((long *)plVar9[6],plVar1,0x20,8);
      plVar1 = (long *)lVar10;
    }
    lVar10 = *plVar9;
    *plVar9 = 0;
    if (lVar10 != 0) {
      (**(code **)(*(long *)plVar9[2] + 0x18))((long *)plVar9[2],lVar10,plVar9[1] << 3,8);
    }
    (**(code **)(**(long **)(param_1 + 0x908) + 0x18))
              (*(long **)(param_1 + 0x908),plVar9,*(undefined8 *)(param_1 + 0x910),
               *(undefined8 *)(param_1 + 0x918));
    plVar1 = local_60;
    local_60 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x918) = local_48;
    *(long **)(param_1 + 0x908) = local_58;
    *(undefined8 *)(param_1 + 0x910) = local_50;
    if (plVar1 != (long *)0x0) {
      plVar9 = (long *)plVar1[5];
      while (plVar9 != (long *)0x0) {
        lVar10 = *plVar9;
        (**(code **)(*(long *)plVar1[6] + 0x18))((long *)plVar1[6],plVar9,0x20,8);
        plVar9 = (long *)lVar10;
      }
      lVar10 = *plVar1;
      *plVar1 = 0;
      if (lVar10 != 0) {
        (**(code **)(*(long *)plVar1[2] + 0x18))((long *)plVar1[2],lVar10,plVar1[1] << 3,8);
      }
      (**(code **)(*local_58 + 0x18))(local_58,plVar1,local_50,local_48);
    }
    if (*(long *)(param_1 + 0x5b8) == 0) goto LAB__text__00362e5c;
LAB__text__00362d48:
    iVar2 = FUN__text__005dc81c();
    iVar3 = 0;
    iVar4 = iVar2;
    if (*(long *)(param_1 + 0x6c8) == 0) goto LAB__text__00362d5c;
  }
  iVar2 = iVar4;
  iVar3 = FUN__text__005dc81c();
LAB__text__00362d5c:
  iVar4 = 0;
  if (*(long *)(param_1 + 0x7d8) != 0) {
    iVar4 = FUN__text__005dc81c();
  }
  lVar10 = *(long *)(param_1 + 0x900);
  uVar11 = (ulong)((float)(ulong)(long)(iVar2 + iVar3 + iVar4) / *(float *)(lVar10 + 0x50));
  if (uVar11 - 1 == 0) {
    uVar11 = 2;
  }
  else if ((uVar11 & uVar11 - 1) != 0) {
    uVar11 = std::__next_prime(uVar11);
  }
  uVar12 = *(ulong *)(lVar10 + 8);
  if (uVar11 <= uVar12) {
    if (uVar12 <= uVar11) {
      return;
    }
    uVar7 = (ulong)((float)*(ulong *)(lVar10 + 0x48) / *(float *)(lVar10 + 0x50));
    if ((uVar12 < 3) ||
       (uVar8 = uVar12 - (uVar12 >> 1 & 0x5555555555555555),
       uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333),
       1 < (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
      uVar7 = std::__next_prime(uVar7);
      if (uVar11 <= uVar7) {
        uVar11 = uVar7;
      }
    }
    else {
      if (1 < uVar7) {
        uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
      }
      if (uVar11 <= uVar7) {
        uVar11 = uVar7;
      }
    }
    if (uVar12 <= uVar11) {
      return;
    }
  }
  FUN__text__002ada70(lVar10,uVar11);
  return;
}


