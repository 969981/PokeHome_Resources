/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045a6b0; name: FUN_.text__0045a6b0
 */


void FUN__text__0045a6b0(long param_1,long param_2,long param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  size_t __n;
  
  if (*(int *)(param_1 + 0x148) != 0) {
    lVar7 = *(long *)(param_1 + 0x140);
    do {
      bVar4 = *(byte *)(lVar7 + 0xc0);
      uVar9 = (ulong)*(uint *)(lVar7 + 0x10c) & 0xff;
      uVar8 = (uint)uVar9;
      if (uVar8 == bVar4) {
LAB__text__0045a7a0:
        if (*(long *)(lVar7 + 0xe8) != 0) {
          uVar3 = *(undefined8 *)(lVar7 + 0xf8);
          *(undefined8 *)(lVar7 + 0xf8) = *(undefined8 *)(lVar7 + 0x100);
          *(undefined8 *)(lVar7 + 0x100) = uVar3;
          *(float *)(lVar7 + 0x58) = *(float *)(lVar7 + 0x58) * *(float *)(param_2 + 4);
          *(float *)(lVar7 + 0x5c) = *(float *)(lVar7 + 0x5c) + *(float *)(param_2 + 8);
          *(float *)(lVar7 + 0x60) = *(float *)(lVar7 + 0x60) + *(float *)(param_2 + 0xc);
          *(float *)(lVar7 + 100) = *(float *)(lVar7 + 100) + *(float *)(param_2 + 0x10);
          *(float *)(lVar7 + 0x68) = *(float *)(lVar7 + 0x68) * *(float *)(param_2 + 0x14);
          cVar1 = *(char *)(lVar7 + 0x6d);
          if (*(char *)(param_2 + 0x19) != '\0') {
            cVar1 = *(char *)(param_2 + 0x19);
          }
          *(char *)(lVar7 + 0x6d) = cVar1;
          *(byte *)(lVar7 + 0x6e) = *(byte *)(lVar7 + 0x6e) & *(byte *)(param_2 + 0x1a);
          FUN__text__0047dd5c(uVar8 != bVar4 || *(char *)(param_2 + 0x1c) != '\0',
                              *(undefined4 *)(lVar7 + 0xc0),param_1,lVar7);
          if (param_3 != 0) {
            FUN__text__00480a40(param_3,param_1);
          }
          if ((uVar8 != bVar4) && (*(char *)(lVar7 + 0x108) != '\0')) {
            uVar8 = *(uint *)(lVar7 + 0xc0);
            if ((*(uint *)(lVar7 + 0xb8) & 0xf00) != 0x300) {
              uVar8 = *(uint *)(lVar7 + 0xb8);
            }
            lVar6 = (ulong)((uVar8 & 0xff) + 3 & 0x1fc) * (ulong)(*(uint *)(lVar7 + 0xc0) & 0xff);
            if ((int)lVar6 != 0) {
              memcpy(*(void **)(lVar7 + 0x100),*(void **)(lVar7 + 0xf8),lVar6 * 4);
            }
          }
        }
      }
      else {
        iVar5 = FUN__text__00451e0c();
        if (iVar5 == 1) {
          uVar2 = *(uint *)(lVar7 + 0xc0);
          if ((*(uint *)(lVar7 + 0xb8) & 0xf00) != 0x300) {
            uVar2 = *(uint *)(lVar7 + 0xb8);
          }
          FUN__text__0045cc00(lVar7 + 0xe8);
          iVar5 = FUN__text__0045cb64(lVar7 + 0xe8,uVar9,uVar2 & 0xff);
          if (iVar5 == 1) {
            lVar6 = ((uVar2 & 0xff) + 3 & 0x1fc) * uVar9;
            if ((int)lVar6 != 0) {
              __n = lVar6 * 4;
              memset(*(void **)(lVar7 + 0x100),0,__n);
              memset(*(void **)(lVar7 + 0xf8),0,__n);
            }
            goto LAB__text__0045a7a0;
          }
        }
      }
      lVar7 = lVar7 + 0x118;
    } while (lVar7 != *(long *)(param_1 + 0x140) + (ulong)*(uint *)(param_1 + 0x148) * 0x118);
  }
  return;
}


