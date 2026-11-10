/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002464bc; name: FUN_.text__002464bc
 */


bool FUN__text__002464bc(long *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = *param_1;
  if (*param_2 < *(uint *)(lVar11 + 0x718)) {
    lVar10 = FUN__text__00323c30(*(undefined4 *)(lVar11 + (ulong)*param_2 * 4 + 0x71c),
                                 lVar11 + 0x6d8);
    if (*param_3 < *(uint *)(lVar11 + 0x718)) {
      uVar1 = *(uint *)(lVar10 + 0x28);
      iVar2 = *(int *)(lVar10 + 0x2c);
      cVar5 = *(char *)(lVar10 + 0x49);
      lVar11 = FUN__text__00323c30(*(undefined4 *)(lVar11 + (ulong)*param_3 * 4 + 0x71c),
                                   lVar11 + 0x6d8);
      iVar3 = *(int *)(lVar11 + 0x2c);
      bVar9 = iVar2 - 0xdU < 0xfffffffe;
      if (!bVar9 && 0xfffffffd < iVar3 - 0xdU) {
        if (iVar2 != iVar3) {
          return iVar2 == 0xb || iVar3 != 0xb;
        }
        if (cVar5 != '\x02') {
          cVar6 = *(char *)(lVar11 + 0x49);
          if (cVar6 == '\x02') {
            return false;
          }
          if (cVar5 != '\a') {
            if (cVar6 == '\a') {
              return false;
            }
            if (cVar5 != '\x03') {
              if (cVar6 == '\x03') {
                return false;
              }
              if (cVar5 != '\x05') {
                if (cVar6 == '\x05') {
                  return false;
                }
                if (cVar5 != '\x04') {
                  if (cVar6 == '\x04') {
                    return false;
                  }
                  return cVar5 == '\x01' || cVar6 != '\x01';
                }
              }
            }
          }
        }
        return true;
      }
      if (iVar2 - 0xdU < 0xfffffffe && iVar3 - 0xdU < 0xfffffffe) {
        uVar4 = *(uint *)(lVar11 + 0x28);
        if ((uVar4 & 0xfff) <= (uVar1 & 0xfff)) {
          if ((uVar1 & 0xfff) != (uVar4 & 0xfff)) {
            return true;
          }
          uVar7 = uVar1 >> 0xc & 0xf;
          uVar8 = uVar4 >> 0xc & 0xf;
          if (uVar7 < uVar8) {
            return false;
          }
          if (uVar7 != uVar8) {
            return true;
          }
          uVar7 = uVar1 >> 0x10 & 0x1f;
          uVar8 = uVar4 >> 0x10 & 0x1f;
          if (uVar7 < uVar8) {
            return false;
          }
          if (uVar7 != uVar8) {
            return true;
          }
          uVar7 = uVar1 >> 0x15 & 0x1f;
          uVar8 = uVar4 >> 0x15 & 0x1f;
          if (uVar7 < uVar8) {
            return false;
          }
          if (uVar7 != uVar8) {
            return true;
          }
          if (uVar1 >> 0x1a < uVar4 >> 0x1a) {
            return false;
          }
          if (iVar3 <= iVar2) {
            return true;
          }
          if (uVar1 >> 0x1a == uVar4 >> 0x1a) {
            return false;
          }
          return true;
        }
        bVar9 = false;
      }
      return bVar9;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


