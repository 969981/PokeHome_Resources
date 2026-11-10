/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0031c760; name: FUN_.text__0031c760
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN__text__0031c760(long param_1)

{
  byte *pbVar1;
  undefined8 *__dest;
  char cVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  size_t sVar6;
  size_t sVar7;
  uint uVar8;
  ushort *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ushort *__src;
  char *pcVar14;
  undefined8 uVar15;
  char *pcVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  ulong local_80;
  size_t local_78;
  char *local_70;
  undefined1 auStack_68 [8];
  
  lVar3 = DAT_008e1d78;
  pcVar14 = (char *)(param_1 + 0x13560a0);
  if (*pcVar14 == '\0') {
    return true;
  }
  if (DAT_008e1d78 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar5 = FUN__text__00304b90();
  sVar6 = strlen(pcVar14);
  if (0xffffffffffffffef < sVar6) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00144380(&local_80);
  }
  if (sVar6 < 0x17) {
    local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar6 << 1));
    pcVar16 = (char *)((ulong)&local_80 | 1);
    if (sVar6 == 0) goto LAB__text__0031c81c;
  }
  else {
    pcVar16 = operator_new((sVar6 | 0xf) + 1);
    local_80 = (sVar6 | 0xf) + 2;
    local_78 = sVar6;
    local_70 = pcVar16;
  }
  memcpy(pcVar16,pcVar14,sVar6);
LAB__text__0031c81c:
  pcVar16[sVar6] = '\0';
  sVar6 = local_80 >> 1 & 0x7f;
  pcVar16 = (char *)((ulong)&local_80 | 1);
  if ((local_80 & 1) != 0) {
    sVar6 = local_78;
    pcVar16 = local_70;
  }
  if (sVar6 != 0) {
    sVar7 = 0;
    do {
      if (pcVar16[sVar7] == '\\') goto LAB__text__0031c8c0;
      sVar7 = sVar7 + 1;
    } while (sVar6 != sVar7);
  }
LAB__text__0031c8d0:
  sVar6 = strlen(pcVar16);
  FUN__text__003d5a80(auStack_68,&DAT_009cca20 + param_1,&DAT_00989680,pcVar16,sVar6,0);
  memset(pcVar14,0,10000000);
  nn::util::DecompressGzip
            (pcVar14,10000000,&DAT_009cca20 + param_1,10000000,(void *)(param_1 + 0x9896e8),0x1bf8);
  uVar8 = (uint)*(ushort *)(param_1 + 0x13560a1);
  if (uVar8 == 0) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
    uVar13 = 0;
    puVar9 = (ushort *)(param_1 + 0x13560a3);
    do {
      uVar18 = (uint)*(ushort *)((long)puVar9 + 5);
      __src = (ushort *)((long)puVar9 + 7);
      if (*(ushort *)((long)puVar9 + 5) != 0) {
        uVar10 = (ulong)*(ushort *)((long)puVar9 + 3);
        if (0x402 < *(ushort *)((long)puVar9 + 3)) {
          FUN__text__003059a4(lVar3,6);
          break;
        }
        do {
          FUN__text__003059a4(lVar3,6);
          uVar19 = (ulong)*__src;
          if (0x1b < uVar19) goto joined_r0x0031cb24;
          lVar11 = lVar5 + uVar10 * 0x2a0 + uVar19 * 0x18;
          pcVar14 = (char *)((long)__src + 3);
          *(undefined1 *)((long)&DWORD_007f7130 + lVar11) = 1;
          uVar17 = (ulong)(byte)__src[1];
          *(byte *)((long)&DWORD_007f7130 + lVar11 + 1) = (byte)__src[1];
          if (uVar17 != 0) {
            memcpy((undefined8 *)((long)&QWORD_007f7138 + lVar11),pcVar14,uVar17);
            pcVar14 = pcVar14 + uVar17;
          }
          __src = (ushort *)(pcVar14 + 1);
          cVar2 = *pcVar14;
          lVar12 = lVar5 + uVar10 * 0x2a0 + uVar19 * 0x18;
          *(char *)((long)&DWORD_007f7130 + lVar12 + 2) = cVar2;
          pbVar1 = (byte *)((long)&DWORD_007f7130 + lVar12 + 3);
          if (cVar2 == '\0') {
            *pbVar1 = 0;
            *(undefined8 *)((long)&fde_007f7140 + lVar5 + uVar10 * 0x2a0 + uVar19 * 0x18) = 0;
          }
          else {
            uVar17 = (ulong)(byte)pcVar14[1];
            __src = (ushort *)(pcVar14 + 2);
            *pbVar1 = pcVar14[1];
            __dest = (undefined8 *)((long)&fde_007f7140 + lVar5 + uVar10 * 0x2a0 + uVar19 * 0x18);
            if (uVar17 != 0) {
              memcpy(__dest,__src,uVar17);
              __src = (ushort *)((long)__src + uVar17);
            }
            uVar15 = *__dest;
            lVar12 = FUN__text__00321ac0();
            *(undefined8 *)(lVar12 + uVar10 * 0xe0 + uVar19 * 8 + 0x41ce8) = uVar15;
          }
          uVar15 = *(undefined8 *)((long)&QWORD_007f7138 + lVar11);
          lVar11 = FUN__text__00321ac0();
          uVar18 = uVar18 - 1;
          *(undefined8 *)(lVar11 + uVar10 * 0xe0 + uVar19 * 8 + 0x9a48) = uVar15;
        } while (uVar18 != 0);
      }
      puVar9 = __src;
      uVar13 = uVar13 + 1;
      bVar4 = uVar8 <= uVar13;
    } while (uVar13 != uVar8);
  }
joined_r0x0031cb24:
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  return bVar4;
LAB__text__0031c8c0:
  if ((sVar6 == sVar7) || (sVar7 == 0xffffffffffffffff)) goto LAB__text__0031c8d0;
  std::string::erase((ulong)&local_80,sVar7);
  sVar6 = local_80 >> 1 & 0x7f;
  pcVar16 = (char *)((ulong)&local_80 | 1);
  if ((local_80 & 1) != 0) {
    sVar6 = local_78;
    pcVar16 = local_70;
  }
  if (sVar6 == 0) goto LAB__text__0031c8d0;
  sVar7 = 0;
  while (pcVar16[sVar7] != '\\') {
    sVar7 = sVar7 + 1;
    if (sVar6 == sVar7) goto LAB__text__0031c8d0;
  }
  goto LAB__text__0031c8c0;
}


