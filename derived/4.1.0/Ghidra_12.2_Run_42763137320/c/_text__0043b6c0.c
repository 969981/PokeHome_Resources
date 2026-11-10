/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043b6c0; name: FUN_.text__0043b6c0
 */


byte FUN__text__0043b6c0(long param_1,ulong *param_2)

{
  uint uVar1;
  void *__dest;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar4 = *param_2;
  if (((((uVar4 != 0 || (int)param_2[1] != 0) || ((int)param_2[2] != 0)) || ((char)param_2[3] != -1)
       ) || (((char)param_2[4] != -1 || (param_2[5] != 0)))) &&
     (uVar6 = *(uint *)(param_1 + 0x10), uVar6 != 0)) {
    iVar7 = 0;
    do {
      uVar8 = iVar7 + (uVar6 >> 1);
      uVar9 = *(ulong *)(*(long *)(param_1 + 8) +
                        (-(ulong)(uVar8 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar8 << 5));
      if (uVar9 == uVar4) {
        lVar5 = *(long *)(param_1 + 8) + (long)(int)uVar8 * 0x20;
        bVar3 = FUN__text__0043cfb0(lVar5);
        if (*(char *)(lVar5 + 10) == '\0' && *(int *)(lVar5 + 0x18) == 0) {
          FUN__text__00438520(lVar5);
          uVar6 = *(uint *)(param_1 + 0x10);
          if (uVar6 != 0) {
            uVar4 = *param_2;
            iVar7 = 0;
            lVar5 = *(long *)(param_1 + 8);
            uVar8 = uVar6;
            do {
              uVar1 = iVar7 + (uVar8 >> 1);
              uVar9 = *(ulong *)(lVar5 + (-(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 |
                                         (ulong)uVar1 << 5));
              if (uVar9 == uVar4) {
                uVar6 = uVar6 - 1;
                if ((long)(int)uVar1 < (long)(ulong)uVar6) {
                  __dest = (void *)(lVar5 + (long)(int)uVar1 * 0x20);
                  memmove(__dest,(void *)((long)__dest + 0x20),
                          (ulong)(((int)lVar5 + uVar6 * 0x20) - (int)__dest) & 0xffffffe0);
                  uVar6 = *(int *)(param_1 + 0x10) - 1;
                }
                *(uint *)(param_1 + 0x10) = uVar6;
                return bVar3 & 1;
              }
              if (uVar9 < uVar4) {
                iVar7 = uVar1 + 1;
              }
              uVar1 = uVar8 - (uVar9 < uVar4);
              uVar8 = uVar1 >> 1;
            } while (1 < uVar1);
          }
        }
        goto LAB__text__0043b76c;
      }
      if (uVar9 < uVar4) {
        iVar7 = uVar8 + 1;
      }
      uVar8 = uVar6 - (uVar9 < uVar4);
      uVar6 = uVar8 >> 1;
    } while (1 < uVar8);
  }
  cVar2 = *(char *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = 0;
  bVar3 = cVar2 != '\0';
LAB__text__0043b76c:
  return bVar3 & 1;
}


