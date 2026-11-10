/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d19d0; name: FUN_.text__004d19d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004d19d0(long param_1,ulong param_2,uint param_3,byte param_4,long param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  char *pcVar11;
  uint *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  ulong local_88;
  long local_68;
  
  local_88 = param_2;
  while( true ) {
    cVar2 = (char)param_3;
    lVar10 = param_1 + (long)(int)cVar2 * 0x30;
    local_68 = 0;
    pcVar11 = (char *)(lVar10 + 199);
    cVar1 = *pcVar11;
    plVar8 = (long *)(lVar10 + 0xa0);
    iVar3 = FUN__text__004d0b50(plVar8,param_5,&local_68,param_4 & 1,(int)cVar2,param_1,1);
    if (iVar3 == 1) {
      if ((*(char *)(param_1 + (ulong)(param_3 & 0xff) * 0x30 + 199) == '\0') &&
         (*(short *)(param_1 + (ulong)(param_3 & 0xff) * 0x30 + 0xcc) == 0 &&
          *(short *)(param_1 + 0x1a8) == 0)) {
        if (*(char *)(param_1 + (long)(int)cVar2 * 0x30 + 0xc4) == '\0') {
          *(char *)(param_1 + (char)local_88 + 0x179) = cVar2;
        }
        param_4 = *(char *)(param_1 + (long)(int)cVar2 * 0x30 + 0xc5) != '\0';
        local_88 = (ulong)param_3;
        param_5 = local_68;
      }
    }
    else {
      uVar9 = *(uint *)(lVar10 + 0xa8);
      iVar3 = (int)cVar2;
      if (cVar1 == '\0') {
        if (uVar9 != 0) {
          do {
            uVar9 = uVar9 - 1;
            lVar5 = *plVar8;
            plVar14 = *(long **)(lVar5 + (ulong)uVar9 * 8);
            if (plVar14 != (long *)0x0) {
              plVar4 = (long *)plVar14[0x12];
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0x10))(plVar4,_DAT_008a47f0);
                plVar14[0x12] = 0;
              }
              puVar15 = (undefined8 *)plVar14[0x13];
              if (puVar15 != (undefined8 *)0x0) {
                (**(code **)*puVar15)(puVar15);
                FUN__text__00400fc0(5,puVar15);
                plVar14[0x13] = 0;
              }
              (**(code **)(*plVar14 + 0x28))(plVar14);
              lVar5 = *plVar8;
              puVar15 = *(undefined8 **)(lVar5 + (ulong)uVar9 * 8);
              if (puVar15 != (undefined8 *)0x0) {
                (**(code **)*puVar15)(puVar15);
                FUN__text__00400fc0(5,puVar15);
                lVar5 = *plVar8;
              }
            }
            uVar7 = *(uint *)(lVar10 + 0xa8);
            puVar15 = (undefined8 *)(lVar5 + (ulong)uVar9 * 8);
            puVar6 = (undefined8 *)((lVar5 + (ulong)uVar7 * 8) - 8);
            if (puVar15 < puVar6) {
              *puVar15 = *puVar6;
              uVar7 = *(uint *)(lVar10 + 0xa8);
            }
            *(undefined1 *)(param_1 + (long)(int)cVar2 * 0x30 + 0xc4) = 0;
            *(uint *)(lVar10 + 0xa8) = uVar7 - 1;
          } while (uVar9 != 0);
        }
        lVar5 = param_1 + (long)iVar3 * 0x30;
        puVar12 = (uint *)(lVar5 + 0xb8);
        uVar9 = *puVar12;
        plVar14 = (long *)(lVar5 + 0xb0);
        lVar5 = *plVar14;
        if (uVar9 != 0) {
          lVar13 = (ulong)uVar9 * 0x30;
          do {
            FUN__text__004d3ca8(lVar5);
            lVar5 = lVar5 + 0x30;
            lVar13 = lVar13 + -0x30;
          } while (lVar13 != 0);
          lVar5 = *plVar14;
        }
        *puVar12 = 0;
        lVar13 = param_1 + (long)iVar3 * 0x30;
        *(undefined4 *)(lVar13 + 0xc0) = 0xffffffff;
        *(undefined2 *)(lVar13 + 0xc4) = 0;
        *(undefined1 *)(lVar13 + 0xc6) = 0;
        *pcVar11 = '\x01';
        if (lVar5 != 0) {
          FUN__text__00400fc0(0,lVar5);
          *plVar14 = 0;
          *(undefined4 *)(param_1 + (long)iVar3 * 0x30 + 0xbc) = 0;
        }
        if (*plVar8 != 0) {
          *(undefined4 *)(lVar10 + 0xa8) = 0;
          FUN__text__00400fc0(0);
          *plVar8 = 0;
          *(undefined4 *)(lVar10 + 0xac) = 0;
        }
        *(char *)(cVar2 + param_1 + 0x179) = cVar2;
        FUN__text__004d1710(param_1,cVar2 + 1,local_88);
        return;
      }
      if (uVar9 != 0) {
        do {
          uVar9 = uVar9 - 1;
          lVar5 = *plVar8;
          plVar14 = *(long **)(lVar5 + (ulong)uVar9 * 8);
          if (plVar14 != (long *)0x0) {
            plVar4 = (long *)plVar14[0x12];
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x10))(plVar4,_DAT_008a47f0);
              plVar14[0x12] = 0;
            }
            puVar15 = (undefined8 *)plVar14[0x13];
            if (puVar15 != (undefined8 *)0x0) {
              (**(code **)*puVar15)(puVar15);
              FUN__text__00400fc0(5,puVar15);
              plVar14[0x13] = 0;
            }
            (**(code **)(*plVar14 + 0x28))(plVar14);
            lVar5 = *plVar8;
            puVar15 = *(undefined8 **)(lVar5 + (ulong)uVar9 * 8);
            if (puVar15 != (undefined8 *)0x0) {
              (**(code **)*puVar15)(puVar15);
              FUN__text__00400fc0(5,puVar15);
              lVar5 = *plVar8;
            }
          }
          uVar7 = *(uint *)(lVar10 + 0xa8);
          puVar15 = (undefined8 *)(lVar5 + (ulong)uVar9 * 8);
          puVar6 = (undefined8 *)((lVar5 + (ulong)uVar7 * 8) - 8);
          if (puVar15 < puVar6) {
            *puVar15 = *puVar6;
            uVar7 = *(uint *)(lVar10 + 0xa8);
          }
          *(undefined1 *)(param_1 + (long)(int)cVar2 * 0x30 + 0xc4) = 0;
          *(uint *)(lVar10 + 0xa8) = uVar7 - 1;
        } while (uVar9 != 0);
      }
      lVar5 = param_1 + (long)(int)cVar2 * 0x30;
      puVar12 = (uint *)(lVar5 + 0xb8);
      uVar9 = *puVar12;
      plVar14 = (long *)(lVar5 + 0xb0);
      lVar5 = *plVar14;
      if (uVar9 != 0) {
        lVar13 = (ulong)uVar9 * 0x30;
        do {
          FUN__text__004d3ca8(lVar5);
          lVar5 = lVar5 + 0x30;
          lVar13 = lVar13 + -0x30;
        } while (lVar13 != 0);
        lVar5 = *plVar14;
      }
      *puVar12 = 0;
      lVar13 = param_1 + (long)(int)cVar2 * 0x30;
      *(undefined4 *)(lVar13 + 0xc0) = 0xffffffff;
      *(undefined2 *)(lVar13 + 0xc4) = 0;
      *(undefined1 *)(lVar13 + 0xc6) = 0;
      *pcVar11 = '\x01';
      if (lVar5 != 0) {
        FUN__text__00400fc0(0,lVar5);
        *plVar14 = 0;
        *(undefined4 *)(param_1 + (long)(int)cVar2 * 0x30 + 0xbc) = 0;
      }
      if (*plVar8 != 0) {
        *(undefined4 *)(lVar10 + 0xa8) = 0;
        FUN__text__00400fc0(0);
        *plVar8 = 0;
        *(undefined4 *)(lVar10 + 0xac) = 0;
      }
    }
    param_3 = (uint)(char)(cVar2 + '\x01');
    if (3 < (int)param_3) break;
    if (param_5 == 0) {
      return;
    }
  }
  return;
}


