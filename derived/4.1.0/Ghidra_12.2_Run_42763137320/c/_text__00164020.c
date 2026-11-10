/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00164020; name: FUN_.text__00164020
 */


void FUN__text__00164020(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  short *psVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  long local_90 [5];
  undefined4 local_68;
  
  psVar8 = (short *)FUN__text__005f3244(param_2);
  bVar4 = false;
  iVar14 = 0;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          if (*psVar8 == 0x10) break;
          if (*psVar8 == 0) {
            return;
          }
          psVar8 = psVar8 + 1;
        }
        uVar9 = FUN__text__0015a3d0(psVar8);
        if ((uVar9 & 1) == 0) break;
        cVar6 = FUN__text__0015a010(psVar8);
        if (cVar6 == '\x01') {
          iVar14 = 0x1c;
          bVar4 = true;
        }
        else if (cVar6 == '\0') {
          bVar4 = false;
          iVar14 = 0x1c;
        }
        psVar8 = (short *)FUN__text__005f3780(psVar8);
      }
      uVar9 = FUN__text__0015a090(psVar8);
      if ((uVar9 & 1) == 0) break;
      uVar7 = FUN__text__005f37f0(psVar8,0);
      uVar9 = (ulong)(uVar7 & 0xffff);
      if (iVar14 == 0) {
        lVar12 = *(long *)(param_1 + 0x208);
        bVar4 = *(int *)(lVar12 + uVar9 * 8 + 4) != 0;
      }
      else {
        lVar12 = *(long *)(param_1 + 0x208);
      }
      lVar13 = uVar9 << 3;
      uVar11 = 0;
LAB__text__001643a4:
      FUN__text__001662b4(param_1,uVar9,*(undefined4 *)(lVar12 + lVar13),bVar4,uVar11);
LAB__text__001643ac:
      psVar8 = (short *)FUN__text__005f3780(psVar8);
      bVar4 = false;
      iVar14 = 0;
    }
    uVar9 = FUN__text__0015a0f0(psVar8);
    if ((uVar9 & 1) != 0) {
      uVar7 = FUN__text__005f37f0(psVar8,0);
      uVar9 = (ulong)(uVar7 & 0xffff);
      if (iVar14 == 0) {
        lVar12 = *(long *)(param_1 + 0x208);
        bVar4 = *(int *)(lVar12 + uVar9 * 8 + 4) != 0;
      }
      else {
        lVar12 = *(long *)(param_1 + 0x208);
      }
      lVar13 = uVar9 << 3;
      uVar11 = 1;
      goto LAB__text__001643a4;
    }
    uVar9 = FUN__text__0015a150(psVar8);
    if ((uVar9 & 1) != 0) {
      uVar7 = FUN__text__005f37f0(psVar8,0);
      uVar9 = (ulong)(uVar7 & 0xffff);
      if (iVar14 == 0) {
        lVar12 = *(long *)(param_1 + 0x208);
        bVar4 = *(int *)(lVar12 + uVar9 * 8 + 4) != 0;
      }
      else {
        lVar12 = *(long *)(param_1 + 0x208);
      }
      lVar13 = uVar9 << 3;
      uVar11 = 2;
      goto LAB__text__001643a4;
    }
    uVar9 = FUN__text__0015a1b0(psVar8);
    if ((uVar9 & 1) != 0) {
      uVar7 = FUN__text__005f37f0(psVar8,0);
      uVar9 = (ulong)(uVar7 & 0xffff);
      if (iVar14 == 0) {
        lVar12 = *(long *)(param_1 + 0x208);
        bVar4 = *(int *)(lVar12 + uVar9 * 8 + 4) != 0;
      }
      else {
        lVar12 = *(long *)(param_1 + 0x208);
      }
      lVar13 = uVar9 << 3;
      uVar11 = 3;
      goto LAB__text__001643a4;
    }
    uVar9 = FUN__text__0015a280(psVar8);
    if ((uVar9 & 1) != 0) {
      uVar9 = FUN__text__005f37f0(psVar8,0);
      uVar9 = uVar9 & 0xffff;
      if ((*(ushort *)(*(long *)(param_1 + 0x1a8) + uVar9 * 0x18 + 0x12) & 1) != 0) {
        uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x208) + uVar9 * 8);
        local_98 = 0;
        local_b0 = 0xdf8732707c30506e;
        local_a8 = 0x71034d;
        uStack_a0 = 0x1e;
        FUN__text__0015b030(local_90,&local_b0,0xb);
        uVar10 = FUN__text__00165374(param_1,*(undefined8 *)(param_1 + 0x170),local_90,uVar2);
        if ((uint)uVar9 < *(uint *)(param_1 + 0x1a0)) {
          uVar11 = *(undefined8 *)(param_1 + 0x170);
          lVar12 = uVar9 * 0x18;
          *(ulong *)(*(long *)(param_1 + 0x1a8) + lVar12 + 8) = uVar10 & 0xffff | 0x20000;
          FUN__text__005f3280(*(undefined8 *)(*(long *)(param_1 + 0x1a8) + lVar12),uVar11);
          *(undefined2 *)(*(long *)(param_1 + 0x1a8) + lVar12 + 0x10) = 0;
          lVar12 = *(long *)(param_1 + 0x1a8) + lVar12;
          *(ushort *)(lVar12 + 0x12) = *(ushort *)(lVar12 + 0x12) & 0xfffe;
        }
        if ((local_90[3] != 0) && (local_90[0] != 0)) {
          (**(code **)(*(long *)(local_90[0] + 0x48) + 0x18))();
        }
        local_90[0] = 0;
        local_90[1] = 0xcbf29ce484222645;
        local_90[2] = 0x70f683;
        local_90[3] = 0;
        if (local_90[4] != 0) {
          (**(code **)(*(long *)(local_90[4] + 0x48) + 0x18))();
        }
        local_90[4] = 0;
        local_68 = 0;
        if (local_98 != 0) {
          (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
        }
      }
      goto LAB__text__001643ac;
    }
    uVar9 = FUN__text__0015a2e0(psVar8);
    psVar8 = (short *)FUN__text__005f3780(psVar8);
    bVar5 = (uVar9 & 1) == 0;
    bVar3 = false;
    if (bVar5) {
      bVar3 = bVar4;
    }
    bVar4 = bVar3;
    iVar1 = 0;
    if (bVar5) {
      iVar1 = iVar14;
    }
    iVar14 = iVar1;
  } while( true );
}


