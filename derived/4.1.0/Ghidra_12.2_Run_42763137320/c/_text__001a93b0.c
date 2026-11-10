/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a93b0; name: FUN_.text__001a93b0
 */


ulong FUN__text__001a93b0(long param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  char local_90 [16];
  ulong local_80;
  undefined8 uStack_78;
  long local_70;
  int local_68;
  undefined1 local_64 [4];
  long local_60;
  undefined4 local_54;
  
  lVar12 = *(long *)(param_1 + 0x10);
  lVar13 = *(long *)(param_1 + 0x158);
  local_60 = lVar13;
  local_54 = param_3;
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  local_64[0] = 0;
  uVar4 = FUN__text__001969a8(param_3,local_64);
  local_68 = 0xd;
  uVar5 = FUN__text__001969cc(param_3,&local_68);
  local_70 = lVar13;
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  FUN__text__001916b0(lVar12,&local_70,param_2,0);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  lVar6 = FUN__text__00195358(lVar12,param_2);
  if (lVar6 == 0) {
    FUN__text__00306588(lVar13);
    uVar4 = 0;
    goto LAB__text__001a9640;
  }
  uVar9 = *(ulong *)(lVar6 + 8);
  uStack_78 = *(undefined8 *)(lVar6 + 0x10);
  local_80 = uVar9;
  uVar7 = FUN__text__00306588(lVar13);
  if ((uVar7 & 1) != 0) {
    uVar4 = 0;
    goto LAB__text__001a9640;
  }
  uVar8 = FUN__text__00306a08(lVar13,2);
  uVar7 = 0x100;
  if ((uVar8 & 1) == 0) {
    uVar7 = 0;
  }
  uVar2 = FUN__text__00191374(&uStack_78);
  uVar9 = thunk_FUN__text__00321ad0(uVar9 >> 0x20,uVar2,&local_60);
  uVar7 = uVar7 | (uVar9 >> 1 & 1) << 3;
  if ((uVar4 & 1) == 0) {
LAB__text__001a9510:
    uVar7 = uVar7 | 0x10;
  }
  else {
    uVar2 = FUN__text__00306a20(local_60);
    local_90[0] = '\0';
    local_90[1] = '\0';
    local_90[2] = '\0';
    local_90[3] = '\0';
    uVar4 = FUN__text__00321b00(local_90,uVar2,local_64[0]);
    if ((uVar4 & 1) == 0) goto LAB__text__001a9510;
  }
  if ((uVar5 & 1) == 0) {
LAB__text__001a9570:
    uVar4 = uVar7 | 0x20;
    if ((local_68 - 5U < 2) && (uVar5 = FUN__text__00307bd0(local_60), (uVar5 & 1) != 0)) {
      puVar11 = *(undefined8 **)(param_1 + 0x68);
      uVar10 = *param_2;
      uVar1 = param_2[1];
      *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(param_2 + 2);
      *puVar11 = uVar10;
      puVar11[1] = uVar1;
      uVar4 = uVar7 | 0x200020;
    }
    uVar10 = FUN__text__003069d0(local_60);
    uVar5 = FUN__text__00196a94(uVar10,&local_54);
    if ((uVar5 & 1) == 0) {
      uVar5 = FUN__text__00307e54(local_60);
      uVar7 = uVar4 | 0x800000;
      if ((uVar5 & 1) == 0) {
        uVar7 = uVar4;
      }
    }
    else {
      uVar7 = uVar4;
    }
  }
  else {
    local_90[8] = '\0';
    local_90[9] = '\0';
    local_90[10] = '\0';
    local_90[0xb] = '\0';
    local_90[0xc] = '\0';
    local_90[0] = '\0';
    local_90[1] = '\0';
    local_90[2] = '\0';
    local_90[3] = '\0';
    local_90[4] = '\0';
    local_90[5] = '\0';
    local_90[6] = '\0';
    local_90[7] = '\0';
    FUN__text__00307180(local_60,local_90,0xd);
    if (local_90[local_68] == '\0') goto LAB__text__001a9570;
    iVar3 = FUN__text__003069b0(local_60);
    if ((iVar3 == 0x32) || (iVar3 = FUN__text__003069b0(local_60), iVar3 == 0x33)) {
      *(undefined1 *)(lVar12 + 0x60) = 1;
    }
    else {
      iVar3 = FUN__text__003069b0(local_60);
      if ((iVar3 == 0x30) || (iVar3 = FUN__text__003069b0(local_60), iVar3 == 0x31)) {
        *(undefined1 *)(lVar12 + 0x61) = 1;
      }
      else {
        iVar3 = FUN__text__003069b0(local_60);
        if (iVar3 != 0x38) {
          iVar3 = FUN__text__003069b0(local_60);
          if (iVar3 != 0x39) goto LAB__text__001a95d8;
        }
        *(undefined1 *)(lVar12 + 0x62) = 1;
      }
    }
  }
LAB__text__001a95d8:
  uVar5 = FUN__text__00307ba4(local_60);
  uVar4 = uVar7 | 0x400000;
  if ((uVar5 & 1) == 0) {
    uVar4 = uVar7;
  }
  if ((local_68 - 1U < 2) &&
     ((uVar5 = FUN__text__00307b78(local_60), (uVar5 & 1) != 0 ||
      (uVar5 = FUN__text__00307ba4(local_60), (uVar5 & 1) != 0)))) {
    uVar4 = uVar4 | 0x1000000;
  }
  uVar5 = FUN__text__00307e54(local_60);
  lVar13 = local_60;
  if ((uVar5 & 1) != 0) {
    uVar5 = FUN__text__00307eb0(local_60);
    if ((uVar5 & 1) == 0) {
      uVar4 = uVar4 | 0x2000;
    }
    lVar13 = local_60;
  }
LAB__text__001a9640:
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  return uVar4;
}


