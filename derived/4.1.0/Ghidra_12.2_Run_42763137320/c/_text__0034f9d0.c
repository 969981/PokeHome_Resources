/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0034f9d0; name: FUN_.text__0034f9d0
 */


void FUN__text__0034f9d0(undefined8 param_1,char *param_2,undefined8 param_3)

{
  ushort *puVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  size_t sVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  byte *extraout_x1;
  byte *extraout_x1_00;
  uint uVar12;
  uint uVar13;
  long *plVar14;
  long local_240;
  long local_238;
  ulong local_230 [31];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar6 = FUN__text__00321ac0();
  puVar1 = (ushort *)(&DAT__text__00193770 + lVar6);
  (&DAT__text__00193772)[lVar6] = 0;
  local_b0 = FUN__text__0064c260();
  FUN__text__0018d370(&local_b8,local_b0,&local_b0);
  if (local_b8 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  *puVar1 = 0;
  if (param_2 == (char *)0x0) {
    iVar5 = FUN__text__0031e240(param_3,0,0);
    pbVar3 = extraout_x1_00;
  }
  else {
    sVar7 = strlen(param_2);
    iVar5 = FUN__text__0031e240(param_3,param_2,sVar7);
    pbVar3 = extraout_x1;
  }
  if ((iVar5 == 0) && (bVar2 = *pbVar3, (bVar2 & 0x7f) == 7)) {
    if (bVar2 == 0x86) {
      uVar13 = (uint)pbVar3[1];
    }
    else if ((bVar2 == 8) || (bVar2 == 7)) {
      uVar13 = *(uint *)(*(long *)(pbVar3 + 1) + 4);
    }
    else {
      uVar13 = *(uint *)(pbVar3 + 4);
    }
    uVar12 = uVar13 & 0xffff;
    *puVar1 = (ushort)uVar13;
  }
  else {
    uVar12 = (uint)*puVar1;
  }
  local_c8 = 0;
  uStack_c0 = 0;
  local_230[0x1e] = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_230[0x1c] = 0;
  local_230[0x1d] = 0;
  local_230[0x1a] = 0;
  local_230[0x1b] = 0;
  local_230[0x18] = 0;
  local_230[0x19] = 0;
  local_230[0x16] = 0;
  local_230[0x17] = 0;
  local_230[0x14] = 0;
  local_230[0x15] = 0;
  local_230[0x12] = 0;
  local_230[0x13] = 0;
  local_230[0x10] = 0;
  local_230[0x11] = 0;
  local_230[0xe] = 0;
  local_230[0xf] = 0;
  local_230[0xc] = 0;
  local_230[0xd] = 0;
  local_230[10] = 0;
  local_230[0xb] = 0;
  local_230[8] = 0;
  local_230[9] = 0;
  local_230[6] = 0;
  local_230[7] = 0;
  local_230[4] = 0;
  local_230[5] = 0;
  local_230[2] = 0;
  local_230[3] = 0;
  local_230[0] = 0;
  local_230[1] = 0;
  if (uVar12 != 0) {
    uVar13 = 0;
    uVar12 = 0;
    do {
      snprintf((char *)&local_138,0x80,(char *)0x71749f,param_2,(ulong)uVar13);
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      uVar8 = FUN__text__00317e00(param_1,&local_a8,&local_138,param_3);
      if ((uVar8 & 1) == 0) break;
      uVar8 = atoll((char *)&local_a8);
      local_230[0x1e] = uVar8;
      if ((byte)(&DAT__text__00193772)[lVar6] < 0x1e) {
        FUN__text__003204d0(&local_a8);
        lVar4 = local_a8;
        local_238 = local_b8;
        if (local_b8 != 0) {
          (**(code **)(*(long *)(local_b8 + 0x48) + 0x10))();
        }
        uVar9 = FUN__text__00301138(lVar4,local_230 + 0x1e,&local_238,0);
        if (local_238 != 0) {
          (**(code **)(*(long *)(local_238 + 0x48) + 0x18))();
          local_238 = 0;
        }
        uVar8 = 0;
        if (local_a8 != 0) {
          uVar8 = (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
        }
        if ((((uVar9 & 1) == 0) || (uVar8 = FUN__text__00306588(local_b8), (uVar8 & 1) != 0)) ||
           (uVar8 = FUN__text__00637404(*(undefined8 *)(local_b8 + 0x58)), lVar4 = local_b8,
           uVar8 != local_230[0x1e])) {
          if (uVar12 < 0x1e) {
            local_230[uVar12] = local_230[0x1e];
            uVar12 = uVar12 + 1;
          }
        }
        else {
          bVar2 = (&DAT__text__00193772)[lVar6];
          if (local_b8 != 0) {
            uVar8 = (**(code **)(*(long *)(local_b8 + 0x48) + 0x10))();
          }
          if (bVar2 < 0x1e) {
            lVar10 = FUN__text__00321ac0();
            uVar8 = FUN__text__00306a28(lVar4,&DAT__text__00193774 + lVar10 + (ulong)bVar2 * 0x1c);
          }
          if (lVar4 != 0) {
            uVar8 = (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
          }
          (&DAT__text__00193772)[lVar6] = (&DAT__text__00193772)[lVar6] + '\x01';
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *puVar1);
    if ((uVar12 != 0) && ((byte)(&DAT__text__00193772)[lVar6] < 0x1e)) {
      local_240 = local_b8;
      if (local_b8 == 0) {
        FUN__text__0034fd70(uVar8,local_230,uVar12,&local_240);
      }
      else {
        plVar14 = (long *)(local_b8 + 0x48);
        uVar11 = (**(code **)(*plVar14 + 0x10))(plVar14);
        FUN__text__0034fd70(uVar11,local_230,uVar12,&local_240);
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
    }
  }
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
  }
  return;
}


