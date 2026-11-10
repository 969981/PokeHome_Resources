/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b23f0; name: FUN_.text__006b23f0
 */


void FUN__text__006b23f0(long param_1,long param_2)

{
  long lVar1;
  int *__src;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  uint *puVar8;
  undefined4 local_74;
  undefined5 local_70;
  undefined3 uStack_6b;
  undefined4 uStack_68;
  undefined4 local_64;
  
  lVar5 = *(long *)(param_2 + 200);
  if (lVar5 != 0) {
    puVar6 = (uint *)(lVar5 + 0x10);
    uVar7 = (ulong)*(ushort *)(lVar5 + 0xc + (ulong)*puVar6 + 2);
    if (uVar7 != 0) {
      puVar8 = puVar6;
      do {
        __src = (int *)(lVar5 + 0xc + (ulong)(*(int *)((long)puVar8 + (ulong)*puVar6) + *puVar6));
        if (*__src == 6) {
          if (*(uint *)(param_1 + 0x60) == 0) {
LAB__text__006b2450:
            local_74 = 0x15;
            local_70 = 0xffffffffff;
            uStack_6b = 0xffffff;
            uStack_68 = 0xffffffff;
            local_64 = 0xff;
            FUN__text__006b3b30(param_1,0x15,&local_74,0x14,1);
          }
          else {
            lVar1 = *(long *)(param_1 + 0xa8) + 0xc;
            uVar3 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
            piVar2 = (int *)(lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar3 + 4) + uVar3));
            if ((*piVar2 == 0x15) && (bVar4 = *(byte *)((long)piVar2 + 10), -1 < (char)bVar4)) {
              memcpy((void *)(lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar3 + 4 + (ulong)bVar4 * 4)
                                             + uVar3)),__src,0xfc);
              goto LAB__text__006b2490;
            }
            if ((*(uint *)(param_1 + 0x60) >> 0x15 & 1) == 0) goto LAB__text__006b2450;
          }
          FUN__text__006b3b30(param_1,6,__src,0xfc,0);
        }
LAB__text__006b2490:
        puVar8 = puVar8 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return;
}


