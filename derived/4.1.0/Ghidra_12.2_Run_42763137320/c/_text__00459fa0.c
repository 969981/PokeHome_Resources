/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00459fa0; name: FUN_.text__00459fa0
 */


void FUN__text__00459fa0(long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  size_t __n;
  undefined1 *puVar15;
  long lVar16;
  uint uVar17;
  long alStack_90 [2];
  undefined1 auStack_80 [8];
  long local_78;
  long local_70;
  long local_68;
  
  puVar15 = auStack_80 + -((ulong)*(uint *)(param_3 + 0x1b0) * 8 + 0xf & 0xffffffff0);
  lVar13 = (long)puVar15 - ((ulong)*(uint *)(param_3 + 0x1b0) * 4 + 0xf & 0x7fffffff0);
  local_78 = param_4;
  local_70 = lVar13;
  uVar9 = FUN__text__0047e778(param_1,param_3 + 0x1a8,puVar15);
  if ((1 < uVar9) && (uVar11 = FUN__text__00478ecc(param_3), (uVar11 & 1) != 0)) {
    FUN__text__0047e840(*(undefined4 *)(param_1 + 0x180),*(undefined4 *)(param_1 + 0x184),uVar9,
                        puVar15,local_70);
  }
  lVar12 = FUN__text__0047d7d0(*(undefined8 *)(param_1 + 0x170));
  if ((uVar9 != 0 && lVar12 != 0) &&
     (lVar13 = lVar13 + (ulong)uVar9 * -0x30, *(int *)(param_1 + 0x148) != 0)) {
    lVar16 = *(long *)(param_1 + 0x140);
    local_68 = lVar13;
    do {
      bVar5 = *(byte *)(lVar16 + 0xc0);
      uVar11 = (ulong)*(uint *)(lVar16 + 0x10c) & 0xff;
      uVar17 = (uint)uVar11;
      if (uVar17 == bVar5) {
LAB__text__0045a130:
        if (*(long *)(lVar16 + 0xe8) != 0) {
          uVar2 = *(undefined8 *)(lVar16 + 0xf8);
          bVar6 = *(byte *)(lVar16 + 0x6c);
          *(undefined8 *)(lVar16 + 0xf8) = *(undefined8 *)(lVar16 + 0x100);
          *(undefined8 *)(lVar16 + 0x100) = uVar2;
          *(float *)(lVar16 + 0x58) = *(float *)(lVar16 + 0x58) * *(float *)(param_2 + 4);
          *(float *)(lVar16 + 0x5c) = *(float *)(lVar16 + 0x5c) + *(float *)(param_2 + 8);
          *(float *)(lVar16 + 0x60) = *(float *)(lVar16 + 0x60) + *(float *)(param_2 + 0xc);
          *(float *)(lVar16 + 100) = *(float *)(lVar16 + 100) + *(float *)(param_2 + 0x10);
          *(float *)(lVar16 + 0x68) = *(float *)(lVar16 + 0x68) * *(float *)(param_2 + 0x14);
          cVar8 = *(char *)(lVar16 + 0x6d);
          if (*(char *)(param_2 + 0x19) != '\0') {
            cVar8 = *(char *)(param_2 + 0x19);
          }
          *(char *)(lVar16 + 0x6d) = cVar8;
          *(byte *)(lVar16 + 0x6e) = *(byte *)(lVar16 + 0x6e) & *(byte *)(param_2 + 0x1a);
          uVar2 = *(undefined8 *)(param_2 + 0x20);
          uVar3 = *(undefined8 *)(param_2 + 0x28);
          uVar7 = *(undefined1 *)(param_2 + 0x18);
          *(long *)(lVar13 + -0x10) = local_68;
          FUN__text__0047e310(lVar16 + 0x28,uVar9,puVar15,bVar6,uVar7,lVar12,uVar2,uVar3);
          if (bVar6 < *(byte *)(param_2 + 0x18)) {
            *(byte *)(lVar16 + 0x6c) = *(byte *)(param_2 + 0x18);
          }
          cVar8 = *(char *)(param_2 + 0x1c);
          uVar4 = *(undefined4 *)(lVar16 + 0xc0);
          *(long *)(lVar13 + -0x10) = lVar16;
          FUN__text__0047ec80(lVar12,uVar9,puVar15,local_70,local_68,
                              uVar17 != bVar5 || cVar8 != '\0',uVar4,param_1);
          if (local_78 != 0) {
            FUN__text__00480a40(local_78,param_1);
          }
          if ((uVar17 != bVar5) && (*(char *)(lVar16 + 0x108) != '\0')) {
            uVar17 = *(uint *)(lVar16 + 0xc0);
            if ((*(uint *)(lVar16 + 0xb8) & 0xf00) != 0x300) {
              uVar17 = *(uint *)(lVar16 + 0xb8);
            }
            lVar14 = (ulong)((uVar17 & 0xff) + 3 & 0x1fc) * (ulong)(*(uint *)(lVar16 + 0xc0) & 0xff)
            ;
            if ((int)lVar14 != 0) {
              memcpy(*(void **)(lVar16 + 0x100),*(void **)(lVar16 + 0xf8),lVar14 * 4);
            }
          }
        }
      }
      else {
        iVar10 = FUN__text__00451e0c();
        if (iVar10 == 1) {
          uVar1 = *(uint *)(lVar16 + 0xc0);
          if ((*(uint *)(lVar16 + 0xb8) & 0xf00) != 0x300) {
            uVar1 = *(uint *)(lVar16 + 0xb8);
          }
          FUN__text__0045cc00(lVar16 + 0xe8);
          iVar10 = FUN__text__0045cb64(lVar16 + 0xe8,uVar11,uVar1 & 0xff);
          if (iVar10 == 1) {
            lVar14 = ((uVar1 & 0xff) + 3 & 0x1fc) * uVar11;
            if ((int)lVar14 != 0) {
              __n = lVar14 * 4;
              memset(*(void **)(lVar16 + 0x100),0,__n);
              memset(*(void **)(lVar16 + 0xf8),0,__n);
            }
            goto LAB__text__0045a130;
          }
        }
      }
      lVar16 = lVar16 + 0x118;
    } while (lVar16 != *(long *)(param_1 + 0x140) + (ulong)*(uint *)(param_1 + 0x148) * 0x118);
  }
  return;
}


