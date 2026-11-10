/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016b430; name: FUN_.text__0016b430
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__0016b430(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  short *psVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  long *plVar14;
  uint local_234;
  int local_208 [16];
  undefined8 local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  code *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [96];
  long local_130;
  code *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [104];
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_78;
  long local_70 [2];
  
  if (param_2 == 0) {
    return 0;
  }
  iVar8 = (**(code **)(*DAT_008e1d70 + 0x28))(DAT_008e1d70,local_208,0xffff,param_1,1);
  uVar4 = DAT_008e1d60;
  if (iVar8 == 0) {
    local_234 = (uint)(local_208[0] != 0);
    if ((local_208[0] != 0) && ((param_3 & 1) != 0)) {
      local_1c0 = CONCAT44(local_1c0._4_4_,400);
      FUN__text__00111970(&local_78,DAT_008e1d60,&local_1c0);
      local_234 = 1;
      iVar8 = 1;
      lVar1 = _DAT_0089f6e0 + 0x10;
      lVar2 = _DAT_0089f718 + 0x10;
      do {
        local_1a8 = (code *)0x0;
        local_1c0 = -0x3423ea1c3112ee72;
        local_1b8 = 0x70da1d;
        local_1b0 = 0x13;
        FUN__text__0015b030(&local_a8,&local_1c0,iVar8);
        if (local_1a8 != (code *)0x0) {
          (**(code **)(*(long *)(local_1a8 + 0x48) + 0x18))();
        }
        memset(&local_1c0,0,0x110);
        local_1c0 = lVar1;
        FUN__text__00113bb0(local_70,*_DAT_0089f550,0,&local_a8,0,uVar4,0);
        if (local_1b8 != 0) {
          (**(code **)(*(long *)(local_1b8 + 0x48) + 0x18))();
        }
        lVar10 = local_70[0];
        local_1b8 = local_70[0];
        plVar14 = (long *)(local_70[0] + 0x48);
        (**(code **)(*plVar14 + 0x10))(plVar14);
        if (local_1b0 != 0 || local_130 != 0) {
          FUN__text__005d9010(lVar10,&local_1c0,1);
        }
        FUN__text__005d8de0(lVar10);
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))(plVar14);
        local_1c8 = *(undefined8 *)(local_1b8 + 400);
        FUN__text__001594b4(local_70,uVar4,&local_1c8);
        iVar13 = 0;
        do {
          FUN__text__005f29c0(local_70[0],iVar13,local_78);
          psVar9 = (short *)FUN__text__005f3244(local_78);
          lVar10 = *param_1;
          if (*psVar9 == 0) {
            uVar11 = 0;
          }
          else {
            uVar5 = 1;
            uVar12 = 0;
            do {
              uVar11 = uVar5;
              sVar6 = FUN__text__0016b820();
              sVar7 = FUN__text__0016b820(*(undefined2 *)(lVar10 + uVar12 * 2));
              if (sVar6 != sVar7) goto LAB__text__0016b64c;
              uVar5 = (ulong)((int)uVar11 + 1);
              uVar12 = uVar11;
            } while (psVar9[uVar11] != 0);
          }
          if (*(short *)(lVar10 + uVar11 * 2) == 0) {
            local_234 = 0;
            break;
          }
LAB__text__0016b64c:
          iVar13 = iVar13 + 1;
        } while (iVar13 != 0x402);
        if (local_1b8 == 0) {
          local_1b8 = 0;
        }
        else {
          FUN__text__005d9290(local_1b8,&local_1c0);
          lVar10 = local_1b8;
          local_1b8 = 0;
          if (lVar10 != 0) {
            (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
          }
        }
        if (local_70[0] != 0) {
          (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
        }
        local_1c0 = lVar2;
        if (local_1b8 == 0) {
          local_1b8 = 0;
          pcVar3 = local_128;
        }
        else {
          FUN__text__005d9290(local_1b8,&local_1c0);
          lVar10 = local_1b8;
          local_1b8 = 0;
          pcVar3 = local_128;
          if (lVar10 != 0) {
            (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
            pcVar3 = local_128;
          }
        }
        local_128 = pcVar3;
        if (pcVar3 != (code *)0x0) {
          local_120 = 0;
          uStack_118 = 0;
          local_130 = 0;
          local_128 = (code *)0x0;
          (*pcVar3)(auStack_110);
        }
        pcVar3 = local_1a8;
        if (local_1a8 != (code *)0x0) {
          local_1a0 = 0;
          uStack_198 = 0;
          local_1b0 = 0;
          local_1a8 = (code *)0x0;
          (*pcVar3)(auStack_190);
        }
        if (local_1b8 != 0) {
          (**(code **)(*(long *)(local_1b8 + 0x48) + 0x18))();
        }
        if ((local_90 != 0) && (local_a8 != 0)) {
          (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
        }
        local_a8 = 0;
        uStack_a0 = 0xcbf29ce484222645;
        local_98 = 0x70f683;
        local_90 = 0;
        if (local_88 != 0) {
          (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != 0xb);
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      }
    }
  }
  else {
    local_234 = 0xffffffff;
  }
  return local_234;
}


