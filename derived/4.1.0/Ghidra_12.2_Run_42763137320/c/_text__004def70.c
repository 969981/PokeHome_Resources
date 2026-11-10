/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004def70; name: FUN_.text__004def70
 */


void FUN__text__004def70(long *param_1,int param_2,long param_3,long param_4,long *param_5)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  float fVar4;
  void *__dest;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 *__src;
  long lVar8;
  size_t __n;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  ulong local_80;
  undefined8 uStack_78;
  
  uVar2 = *(uint *)(param_1 + 1);
  bVar3 = *(byte *)(param_3 + 8);
  uVar6 = (uint)bVar3;
  if ((param_4 != 0) && (uVar6 = (uint)*(byte *)(param_4 + 8), *(byte *)(param_4 + 8) <= bVar3)) {
    uVar6 = (uint)bVar3;
  }
  __src = auStack_90 + -(ulong)((uVar6 * 4 + 0xc & 0x7f0) * param_2);
  if (uVar2 != 0) {
    lVar9 = 0;
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x10));
    do {
      lVar1 = *param_1 + lVar9;
      if (*(int *)(lVar1 + 0xb0) != 3) {
        local_88 = *(undefined8 *)(lVar1 + 0x98);
        local_80 = *(ulong *)(lVar1 + 0xa0);
        uStack_78 = *(ulong *)(lVar1 + 0xa8);
        if ((uStack_78 >> 0x10 & 0xffff) != 0) {
          lVar8 = param_4;
          if (*(int *)(lVar1 + 0xb0) != 2) {
            lVar8 = param_3;
          }
          uVar7 = local_80 & 0xff;
          __n = ((*(uint *)(lVar8 + 8) & 0xff) * 4 + 0xc & 0x7f0) * uVar7;
          (**(code **)(*param_5 + 0x90))
                    (param_5,lVar1 + 8,local_80 & 0xffffffff,*(uint *)(lVar8 + 8),__src);
          lVar5 = *(long *)(lVar1 + 0xb8);
          if (lVar5 == 0) {
            __dest = (void *)FUN__text__00400f90(0,((ulong)((*(uint *)(lVar8 + 8) & 0xff) * 4 + 0xc)
                                                   & 0x7f0) * uVar7,0x10);
            *(void **)(lVar1 + 0xb8) = __dest;
            if (__dest != (void *)0x0) {
              memcpy(__dest,__src,__n);
              lVar5 = *(long *)(lVar1 + 0xb8);
              if (lVar5 != 0) goto LAB__text__004df03c;
            }
          }
          else {
LAB__text__004df03c:
            thunk_FUN__text__00420290
                      (SUB42(1.0 / fVar4,0),&local_88,lVar8,lVar1 + 0x50,lVar5,__src,uStack_78._2_2_
                      );
            memcpy(*(void **)(lVar1 + 0xb8),__src,__n);
          }
        }
      }
      lVar9 = lVar9 + 0xc0;
    } while ((ulong)uVar2 * 0xc0 != lVar9);
  }
  return;
}


