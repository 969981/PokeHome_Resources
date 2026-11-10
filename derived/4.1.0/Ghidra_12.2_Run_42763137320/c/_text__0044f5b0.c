/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044f5b0; name: FUN_.text__0044f5b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__0044f5b0(long param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  undefined1 local_e0 [4];
  undefined4 local_dc;
  char local_d8;
  undefined4 local_d7;
  undefined2 local_d3;
  long *local_d0;
  long *local_c8 [2];
  undefined8 local_b8;
  undefined4 local_b0;
  long *local_a8 [9];
  
  lVar14 = *(long *)(*(long *)(param_1 + 0xe0) + 0x18);
  *(undefined8 *)(param_1 + 0x108) = 0x500000000;
  uVar9 = FUN__text__00400f80(5,0xa0);
  *(undefined8 *)(param_1 + 0x100) = uVar9;
  local_a8[0] = *(long **)(param_1 + 0xe0);
  local_b8 = *(undefined8 *)(lVar14 + 0x2b0);
  local_b0 = *(undefined4 *)(lVar14 + 0x2b8);
  uVar4 = *_DAT_008a4b68;
  uVar10 = (**(code **)(*local_a8[0] + 0xb0))();
  uVar15 = 1;
  if ((uVar10 & 1) == 0) {
    plVar11 = (long *)FUN__text__00400f80(5,0xf8);
    if (plVar11 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0xf0) = 0;
      return 0x34;
    }
    *plVar11 = _DAT_008a4f20 + 0x10;
    plVar11[1] = 0;
    FUN__text__0041ac34(plVar11 + 2);
    *(undefined4 *)(plVar11 + 0x17) = 0;
    plVar11[0x10] = 0;
    plVar11[0x11] = 0x2b00000000;
    *(undefined4 *)(plVar11 + 0x12) = 0;
    plVar11[0x1c] = param_1;
    plVar11[0x1d] = 0;
    *(undefined8 *)((long)plVar11 + 0x94) = 0;
    *(undefined8 *)((long)plVar11 + 0x9c) = 0x3f800000ffffffff;
    *(undefined8 *)((long)plVar11 + 0xa4) = 0x1ffffffff;
    plVar11[0x16] = 0;
    *(undefined8 *)((long)plVar11 + 0xbc) = 0x2b;
    *(undefined8 *)((long)plVar11 + 0xc4) = 0;
    *(undefined8 *)((long)plVar11 + 0xcc) = 0x3f800000ffffffff;
    *(undefined8 *)((long)plVar11 + 0xd4) = 0x1ffffffff;
    *(long **)(param_1 + 0xf0) = plVar11;
    iVar8 = FUN__text__004dab9c(plVar11,&local_b8,lVar14,uVar4);
    if (iVar8 != 1) {
      return 2;
    }
    local_a8[1] = *(long **)(param_1 + 0xf0);
    uVar15 = 2;
  }
  lVar7 = _DAT_008a4ed8;
  local_b8 = CONCAT44(local_b8._4_4_,uVar4);
  uVar10 = 0;
  *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) | 2;
  uVar9 = _DAT_008a47f0;
  do {
    local_c8[0] = (long *)0x0;
    FUN__text__00475cd0(lVar14,uVar10 & 0xffffffff,local_c8);
    if (local_c8[0] != (long *)0x0) {
      local_d0 = (long *)0x0;
      local_e0[0] = 0;
      local_dc = 0;
      local_d8 = '\x01';
      local_d7 = 0;
      local_d3 = 1;
      iVar8 = FUN__text__00425bc0((int)local_c8[0][6],&local_d0,local_e0);
      if (iVar8 == 1) {
        iVar8 = FUN__text__00425f3c((int)local_c8[0][6],3,local_e0);
        if (((iVar8 != 0) || ((char)local_d7 != '\0' && local_d8 != '\0')) ||
           (local_d7._3_1_ != '\0')) {
          (**(code **)(*local_d0 + 0x10))(local_d0,uVar9);
          iVar8 = 1;
          goto LAB__text__0044f7a4;
        }
        if (local_d7._2_1_ == '\0') {
          if (local_d8 == '\0') {
            plVar11 = (long *)FUN__text__00400f80(5,0x158);
            if (plVar11 == (long *)0x0) goto LAB__text__0044fa94;
            memset(plVar11 + 1,0,0x150);
            *plVar11 = lVar7 + 0x10;
            FUN__text__004d91c8(plVar11 + 2);
            plVar11[9] = 0;
            *(undefined4 *)(plVar11 + 10) = 0;
            *(undefined4 *)(plVar11 + 0xb) = 0;
            *(undefined1 *)(plVar11 + 0xc) = 0xff;
            *(undefined1 *)(plVar11 + 0xd) = 0xff;
            plVar11[0xe] = 0;
            plVar11[0xf] = 0;
            plVar11[0x10] = 0;
            plVar11[0x11] = 0;
            plVar11[0x12] = 0;
            plVar11[0x13] = 0;
            plVar11[0x14] = 0;
            plVar11[0x15] = 0;
            plVar11[0x16] = 0;
            plVar11[0x17] = 0;
            lVar12 = _DAT_008a4f38 + 0x58;
            plVar11[7] = _DAT_008a4f38 + 0x10;
            plVar11[8] = lVar12;
            *(undefined4 *)(plVar11 + 0x18) = 0xffffffff;
            lVar12 = _DAT_008a4ee8 + 0x10;
            *(undefined4 *)(plVar11 + 0x1d) = 0;
            plVar11[0x1c] = 0;
            plVar11[0x22] = 0;
            *(undefined8 *)((long)plVar11 + 0xec) = 0x2b;
            *plVar11 = lVar12;
            *(undefined8 *)((long)plVar11 + 0xf4) = 0;
            *(undefined8 *)((long)plVar11 + 0xfc) = 0x3f800000ffffffff;
            *(undefined8 *)((long)plVar11 + 0x104) = 0x1ffffffff;
            plVar11[0x23] = 0x2b00000000;
            *(undefined4 *)(plVar11 + 0x24) = 0;
            *(undefined8 *)((long)plVar11 + 0x124) = 0;
            *(undefined8 *)((long)plVar11 + 300) = 0x3f800000ffffffff;
            *(undefined8 *)((long)plVar11 + 0x134) = 0x1ffffffff;
            goto LAB__text__0044fa44;
          }
          plVar11 = (long *)FUN__text__00400f80(5,0xe8);
          if (plVar11 != (long *)0x0) {
            plVar11[0x1b] = 0;
            plVar11[0x1c] = 0;
            plVar11[0x19] = 0;
            plVar11[0x1a] = 0;
            plVar11[0x17] = 0;
            plVar11[0x18] = 0;
            plVar11[0x15] = 0;
            plVar11[0x16] = 0;
            plVar11[0x13] = 0;
            plVar11[0x14] = 0;
            plVar11[0x11] = 0;
            plVar11[0x12] = 0;
            plVar11[0xf] = 0;
            plVar11[0x10] = 0;
            plVar11[0xd] = 0;
            plVar11[0xe] = 0;
            plVar11[0xb] = 0;
            plVar11[0xc] = 0;
            plVar11[9] = 0;
            plVar11[10] = 0;
            plVar11[7] = 0;
            plVar11[8] = 0;
            plVar11[5] = 0;
            plVar11[6] = 0;
            plVar11[3] = 0;
            plVar11[4] = 0;
            plVar11[2] = 0;
            *plVar11 = lVar7 + 0x10;
            plVar11[1] = 0;
            FUN__text__004d91c8();
            plVar11[9] = 0;
            *(undefined4 *)(plVar11 + 10) = 0;
            *(undefined4 *)(plVar11 + 0xb) = 0;
            *(undefined1 *)(plVar11 + 0xc) = 0xff;
            *(undefined1 *)(plVar11 + 0xd) = 0xff;
            plVar11[0xe] = 0;
            plVar11[0xf] = 0;
            plVar11[0x10] = 0;
            plVar11[0x11] = 0;
            plVar11[0x12] = 0;
            plVar11[0x13] = 0;
            plVar11[0x14] = 0;
            plVar11[0x15] = 0;
            plVar11[0x16] = 0;
            plVar11[0x17] = 0;
            lVar12 = _DAT_008a4f38 + 0x58;
            plVar11[7] = _DAT_008a4f38 + 0x10;
            plVar11[8] = lVar12;
            *(undefined4 *)(plVar11 + 0x18) = 0xffffffff;
            lVar12 = _DAT_008a4ed0 + 0x10;
            *(undefined4 *)(plVar11 + 0x1c) = 0;
            *plVar11 = lVar12;
            goto LAB__text__0044fa44;
          }
LAB__text__0044fa94:
          (**(code **)(*local_d0 + 0x10))(local_d0,uVar9);
          iVar8 = 2;
          uVar16 = 9;
        }
        else {
          if ((local_d8 == '\0') ||
             (plVar11 = (long *)FUN__text__00400f80(5,0xe8), plVar11 == (long *)0x0))
          goto LAB__text__0044fa94;
          plVar11[0x1b] = 0;
          plVar11[0x1c] = 0;
          plVar11[0x19] = 0;
          plVar11[0x1a] = 0;
          plVar11[0x17] = 0;
          plVar11[0x18] = 0;
          plVar11[0x15] = 0;
          plVar11[0x16] = 0;
          plVar11[0x13] = 0;
          plVar11[0x14] = 0;
          plVar11[0x11] = 0;
          plVar11[0x12] = 0;
          plVar11[0xf] = 0;
          plVar11[0x10] = 0;
          plVar11[0xd] = 0;
          plVar11[0xe] = 0;
          plVar11[0xb] = 0;
          plVar11[0xc] = 0;
          plVar11[9] = 0;
          plVar11[10] = 0;
          plVar11[7] = 0;
          plVar11[8] = 0;
          plVar11[5] = 0;
          plVar11[6] = 0;
          plVar11[3] = 0;
          plVar11[4] = 0;
          plVar11[2] = 0;
          *plVar11 = lVar7 + 0x10;
          plVar11[1] = 0;
          FUN__text__004d91c8();
          plVar11[9] = 0;
          *(undefined4 *)(plVar11 + 10) = 0;
          *(undefined4 *)(plVar11 + 0xb) = 0;
          *(undefined1 *)(plVar11 + 0xc) = 0xff;
          *(undefined1 *)(plVar11 + 0xd) = 0xff;
          plVar11[0xe] = 0;
          plVar11[0xf] = 0;
          plVar11[0x10] = 0;
          plVar11[0x11] = 0;
          plVar11[0x12] = 0;
          plVar11[0x13] = 0;
          plVar11[0x14] = 0;
          plVar11[0x15] = 0;
          plVar11[0x16] = 0;
          plVar11[0x17] = 0;
          lVar12 = _DAT_008a4f38 + 0x10;
          lVar2 = _DAT_008a4f38 + 0x58;
          *(undefined4 *)(plVar11 + 0x1c) = 0;
          plVar11[7] = lVar12;
          plVar11[8] = lVar2;
          *(undefined4 *)(plVar11 + 0x18) = 0xffffffff;
          lVar12 = _DAT_008a4ee0 + 0x10;
          *plVar11 = lVar12;
LAB__text__0044fa44:
          iVar8 = (**(code **)(lVar12 + 0x60))
                            (plVar11,local_d0,local_c8,uVar10 & 0xffffffff,param_1,&local_b8);
          if (iVar8 != 1) {
            (**(code **)(*plVar11 + 0x68))(plVar11);
            (**(code **)*plVar11)(plVar11);
            FUN__text__00400fc0(5,plVar11);
            goto LAB__text__0044f7a4;
          }
          uVar16 = 0;
          uVar13 = uVar15 & 0xff;
          *(long **)(param_1 + uVar10 * 8 + 0xa8) = plVar11;
          uVar15 = (ulong)((int)uVar15 + 1);
          local_a8[uVar13] = plVar11;
        }
      }
      else {
LAB__text__0044f7a4:
        uVar16 = 8;
      }
      if (local_c8[0] != (long *)0x0) {
        piVar1 = (int *)((long)local_c8[0] + 0x14);
        do {
          iVar3 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
          (**(code **)(*local_c8[0] + 0x20))();
        }
      }
      if ((uVar16 | 8) != 8) {
        return iVar8;
      }
    }
    uVar10 = uVar10 + 1;
    if (uVar10 == 4) {
      *(undefined4 *)(param_1 + 0x150) = local_b8._4_4_;
      iVar8 = FUN__text__00451ce0(param_1 + 0x80);
      if (iVar8 == 1) {
        local_a8[uVar15 & 0xff] = (long *)(param_1 + 0x70);
        iVar8 = FUN__text__00457950((long *)(param_1 + 200),lVar14);
        if (iVar8 == 1) {
          uVar16 = ((uint)uVar15 & 0xff) + 1;
          uVar10 = (ulong)uVar16 & 0xff;
          local_a8[uVar10] = (long *)(param_1 + 200);
          if (uVar16 >> 8 == 0) {
            do {
              (**(code **)(*local_a8[uVar10] + 0x58))(local_a8[uVar10],local_a8[(int)uVar10 - 1]);
              uVar10 = uVar10 - 1;
            } while ((uVar10 & 0xff) != 0);
          }
          if (*(long *)(param_1 + 0xf0) != 0) {
            FUN__text__004dac74(*(long *)(param_1 + 0xf0),&local_b8);
          }
          FUN__text__00450b10(param_1);
          iVar8 = 1;
        }
      }
      return iVar8;
    }
  } while( true );
}


