/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006563d8; name: FUN_.text__006563d8
 */


undefined8
FUN__text__006563d8(long param_1,byte *param_2,size_t param_3,undefined8 *param_4,size_t *param_5)

{
  ulong uVar1;
  ulong uVar2;
  char *__s;
  size_t sVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  char *pcVar9;
  byte local_64 [4];
  
  local_64[2] = 0;
  local_64[0] = 0;
  local_64[1] = 0;
  *param_4 = 0;
  *param_5 = 0;
  if (param_3 == 0) {
    param_3 = strlen((char *)param_2);
  }
  __s = (char *)FUN__text__006783d4((param_3 << 2) / 3 + 4);
  if (__s == (char *)0x0) {
    uVar4 = 0x1b;
  }
  else {
    pcVar9 = __s;
    if (param_3 != 0) {
      do {
        lVar6 = 0;
        iVar5 = 0;
        do {
          if (param_3 == 0) {
            bVar8 = 0;
          }
          else {
            bVar8 = *param_2;
            iVar5 = iVar5 + 1;
            param_3 = param_3 - 1;
            param_2 = param_2 + 1;
          }
          local_64[lVar6] = bVar8;
          lVar6 = lVar6 + 1;
        } while (lVar6 != 3);
        uVar7 = (ulong)(local_64[0] >> 2);
        uVar1 = (ulong)(local_64[1] >> 4) | ((ulong)local_64[0] & 3) << 4;
        uVar2 = (ulong)(local_64[2] >> 6) | ((ulong)local_64[1] & 0xf) << 2;
        if (iVar5 == 2) {
          FUN__text__006599c0(pcVar9,5,0x713fd3,*(undefined1 *)(param_1 + uVar7),
                              *(undefined1 *)(param_1 + uVar1),*(undefined1 *)(param_1 + uVar2));
        }
        else if (iVar5 == 1) {
          FUN__text__006599c0(pcVar9,5,0x71c5ad,*(undefined1 *)(param_1 + uVar7),
                              *(undefined1 *)(param_1 + uVar1));
        }
        else {
          FUN__text__006599c0(pcVar9,5,0x70f189,*(undefined1 *)(param_1 + uVar7),
                              *(undefined1 *)(param_1 + uVar1),*(undefined1 *)(param_1 + uVar2),
                              *(undefined1 *)(param_1 + ((ulong)local_64[2] & 0x3f)));
        }
        pcVar9 = pcVar9 + 4;
      } while (param_3 != 0);
    }
    *pcVar9 = '\0';
    *param_4 = __s;
    FUN__text__006783e4(0);
    sVar3 = strlen(__s);
    uVar4 = 0;
    *param_5 = sVar3;
  }
  return uVar4;
}


