/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cbf50; name: FUN_.text__003cbf50
 */


int FUN__text__003cbf50(long *param_1)

{
  long lVar1;
  uint *puVar2;
  ulong *puVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  size_t sVar8;
  long extraout_x1;
  ulong uVar9;
  byte *pbVar10;
  int *piVar11;
  ulong uVar12;
  char *__s;
  long *plVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_68;
  
  FUN__text__005d8e38();
  iVar6 = (**(code **)(*param_1 + 0x40))(param_1);
  FUN__text__005d8f14(param_1);
  if (iVar6 == 0) {
    piVar11 = (int *)(param_1[0x32] + (ulong)*(uint *)param_1[0x32]);
    param_1[0x36] = (long)piVar11;
    if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
       (uVar9 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar9 == 0)) {
      puVar16 = (uint *)0x0;
    }
    else {
      puVar16 = (uint *)((long)piVar11 + uVar9);
      puVar16 = (uint *)((long)puVar16 + (ulong)*puVar16);
    }
    FUN__text__003cc2a0(param_1 + 0x3d,*puVar16);
    lVar14 = param_1[0x38];
    uVar9 = (ulong)*puVar16;
    uVar12 = lVar14 - param_1[0x37] >> 5;
    lVar15 = uVar9 - uVar12;
    if (uVar9 < uVar12 || lVar15 == 0) {
      if (uVar9 < uVar12) {
        lVar1 = param_1[0x37] + uVar9 * 0x20;
        for (; lVar14 != lVar1; lVar14 = lVar14 + -0x20) {
          if (*(long *)(lVar14 + -8) != 0) {
            plVar13 = (long *)(*(long *)(lVar14 + -8) + 0x48);
            (**(code **)(*plVar13 + 0x18))(plVar13,lVar15);
            *(undefined8 *)(lVar14 + -8) = 0;
            lVar15 = extraout_x1;
          }
        }
        param_1[0x38] = lVar1;
      }
    }
    else {
      FUN__text__003ccdf0(param_1 + 0x37);
    }
    if (*puVar16 != 0) {
      uVar9 = 0;
      do {
        piVar11 = (int *)((long)(puVar16 + uVar9 + 1) + (ulong)puVar16[uVar9 + 1]);
        if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
           (uVar12 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar12 == 0)) {
          lVar14 = 0;
          __s = (char *)0x4;
          sVar8 = strlen((char *)0x4);
          bVar4 = bRam0000000000000004;
        }
        else {
          puVar2 = (uint *)((long)piVar11 + uVar12);
          lVar14 = (long)puVar2 + (ulong)*puVar2;
          __s = (char *)(lVar14 + 4);
          sVar8 = strlen(__s);
          bVar4 = *(byte *)(lVar14 + 4);
        }
        uVar12 = 0xcbf29ce484222645;
        if (bVar4 != 0) {
          uVar12 = 0xcbf29ce484222645;
          pbVar10 = (byte *)(lVar14 + 5);
          do {
            uVar12 = (uVar12 ^ bVar4) * 0x100000001b3;
            bVar4 = *pbVar10;
            pbVar10 = pbVar10 + 1;
          } while (bVar4 != 0);
        }
        puVar3 = (ulong *)(param_1[0x37] + uVar9 * 0x20);
        puVar3[2] = sVar8;
        *puVar3 = uVar12;
        puVar3[1] = (ulong)__s;
        uVar12 = puVar3[3];
        if (uVar12 != 0) {
          (**(code **)(*(long *)(uVar12 + 0x48) + 0x18))();
        }
        puVar3[3] = 0;
        piVar11 = (int *)param_1[0x36];
        if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 0xd) ||
           (uVar12 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[6], uVar12 == 0)) {
          bVar5 = false;
        }
        else {
          bVar5 = *(char *)((long)piVar11 + uVar12) != '\0';
        }
        lVar15 = param_1[0x3d] + uVar9 * 0x110;
        uVar7 = FUN__text__0016ae08(DAT_008e1560);
        FUN__text__003cc410(&local_98,__s,bVar5,uVar7);
        lVar14 = param_1[1];
        if (param_1[0x2f] != 0) {
          lVar14 = param_1[0x2f];
        }
        FUN__text__003c4ed0(&local_68,DAT_008e1540,1,&local_98,0,lVar14,0);
        if (*(long *)(lVar15 + 8) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar15 + 8) + 0x48) + 0x18))();
        }
        lVar14 = local_68;
        *(long *)(lVar15 + 8) = local_68;
        if (local_68 != 0) {
          plVar13 = (long *)(local_68 + 0x48);
          (**(code **)(*plVar13 + 0x10))(plVar13);
          if (*(long *)(lVar15 + 0x10) != 0 || *(long *)(lVar15 + 0x90) != 0) {
            FUN__text__005d9010(lVar14,lVar15,1);
          }
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
        if ((local_80 != 0) && (local_98 != 0)) {
          (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
        }
        local_98 = 0;
        uStack_90 = 0xcbf29ce484222645;
        local_88 = 0x70f683;
        local_80 = 0;
        if (local_78 != 0) {
          (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *puVar16);
    }
  }
  return iVar6;
}


