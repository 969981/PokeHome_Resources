/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006aae70; name: FUN_.text__006aae70
 */


void FUN__text__006aae70(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x4a) = 0;
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xf | 0xe0;
  uVar6 = FUN__text__006ab694();
  if (((uVar6 & 1) == 0) && (uVar6 = FUN__text__006ab77c(param_1,param_2,param_4), (uVar6 & 1) == 0)
     ) {
    local_b8 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    uVar6 = FUN__text__006aba30(param_1,&local_b8,&local_b0,param_3);
    uVar8 = local_b8;
    if ((uVar6 & 1) == 0) {
      lVar7 = FUN__text__006a4248(*(undefined8 *)(param_4 + 0x38),param_2,0x4d524f4e,local_b8,
                                  &local_b0);
      *(long *)(param_1 + 0x20) = lVar7;
      uVar4 = FUN__text__006c0d80(*(undefined8 *)(lVar7 + 0x38),0x4d524f4e,uVar8,&local_b0);
      *(undefined2 *)(param_1 + 0x4a) = uVar4;
      *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 0xf0;
      uVar1 = *(uint *)(param_1 + 0x14) & 3;
      if (uVar1 != 0) {
        uVar2 = *(uint *)(param_1 + 0x10);
        lVar9 = *(long *)(param_1 + 0x18);
        uVar6 = (ulong)(uVar2 >> 2) & 3;
        lVar3 = ((ulong)uVar2 & 3) * 0x10;
        lVar7 = lVar9 + lVar3 + uVar6 * 0x14;
        if (*(char *)(lVar7 + 1) != '\a') {
          if ((uVar1 == 1) || (*(char *)(lVar7 + 0x11) == '\a')) {
            uVar10 = 1;
          }
          else if (uVar1 == 2) {
            uVar10 = 2;
          }
          else {
            uVar10 = 2;
            if (*(char *)(lVar7 + 0x21) != '\a') {
              uVar10 = 3;
            }
          }
          if (uVar1 <= uVar10) {
            return;
          }
        }
        uVar8 = FUN__text__006b13f0(*(undefined8 *)(param_1 + 0x20),uVar4);
        uVar5 = FUN__text__006f3f40(uVar8,4,3,0x719b29);
        *(undefined4 *)
         (lVar9 + (((ulong)uVar2 & 0x30) + lVar3 | (ulong)(uVar2 >> 6) & 8) +
                  ((ulong)(uVar2 >> 8) & 0xc) + ((ulong)(uVar2 >> 4) & 0x1c) +
                  ((ulong)(uVar2 >> 0xc) & 8) +
                  ((ulong)(uVar2 >> 0xd) & 0x60) + (ulong)(-(uVar2 >> 0xc & 1) & 0xc) +
                  (ulong)(-(uVar2 >> 0x10 & 1) & 0x1c) +
                  ((ulong)(uVar2 >> 0xc) & 0x10) * ((ulong)(uVar2 >> 6) & 7) +
                  (ulong)((int)(uVar2 << 0xe) >> 0x1f & 0x74) +
                  (((ulong)(uVar2 >> 0xd) & 3) + uVar6) * 0x14 + 8) = uVar5;
      }
    }
  }
  return;
}


