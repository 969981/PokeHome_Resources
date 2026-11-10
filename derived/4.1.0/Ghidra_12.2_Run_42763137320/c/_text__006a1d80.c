/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a1d80; name: FUN_.text__006a1d80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006a1d80(long param_1,long param_2,undefined8 param_3,int *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  
  lVar3 = FUN__text__006b253c(*(undefined8 *)(param_1 + 0x18),0x13);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 8) == 0)) {
    puVar4 = (undefined8 *)(*(code *)*_DAT_008a6960)(0xe8,4,*_DAT_008a6970);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[4] = 0;
      puVar4[2] = puVar4 + 2;
      puVar4[3] = puVar4 + 2;
      *(undefined1 *)(puVar4 + 5) = 0;
      *(undefined4 *)(puVar4 + 0xe) = 0;
      *(undefined4 *)(puVar4 + 0x19) = 0;
      *(undefined1 *)(puVar4 + 0x1c) = 0;
      puVar4[0xf] = 0;
      puVar4[0x10] = puVar4 + 0x10;
      puVar4[0x11] = puVar4 + 0x10;
      puVar4[0x12] = puVar4 + 0x12;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[0x13] = puVar4 + 0x12;
      puVar4[0x14] = 0;
      puVar4[0x15] = 0;
      puVar4[0x16] = puVar4 + 0x16;
      puVar4[0x17] = puVar4 + 0x16;
      puVar4[0x18] = 0;
      puVar4[0x1a] = 0;
      puVar4[0x1b] = 0;
    }
    local_70 = param_3;
    lStack_68 = param_1;
    FUN__text__006a1f30(&local_70,puVar4,*(undefined8 *)(param_2 + 0x140));
    local_60 = 0x13;
    puStack_58 = puVar4;
    FUN__text__006b25a8(*(undefined8 *)(param_1 + 0x18),0x13,&local_60,0x10);
    if (param_4 != (int *)0x0) {
      puVar7 = (undefined8 *)puVar4[3];
      puVar1 = puVar4 + 2;
      if (puVar7 != puVar1) {
        iVar2 = *param_4;
        if (0 < iVar2) {
          do {
            if (0 < iVar2) {
              uVar6 = puVar7[3];
              lVar3 = 0;
              lVar8 = 0x1c;
              do {
                uVar5 = FUN__text__0069a120(uVar6,*(long *)(param_4 + 2) + lVar8 + -0x1c);
                if ((uVar5 & 1) != 0) {
                  if (*(long *)(param_4 + 2) != 0) {
                    FUN__text__006a2070(*(undefined4 *)
                                         (*(long *)(param_4 + 4) +
                                         (ulong)*(uint *)(*(long *)(param_4 + 2) + lVar8)),puVar4,
                                        uVar6);
                  }
                  break;
                }
                lVar3 = lVar3 + 1;
                lVar8 = lVar8 + 0x28;
              } while (lVar3 < *param_4);
            }
            puVar7 = (undefined8 *)puVar7[1];
            if (puVar7 == puVar1) {
              return;
            }
            iVar2 = *param_4;
          } while( true );
        }
        do {
          puVar7 = (undefined8 *)puVar7[1];
        } while (puVar7 != puVar1);
      }
    }
  }
  return;
}


