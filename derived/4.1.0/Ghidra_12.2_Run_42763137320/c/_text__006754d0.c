/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006754d0; name: FUN_.text__006754d0
 */


undefined8 FUN__text__006754d0(long *param_1,undefined1 *param_2)

{
  char *__filename;
  undefined8 uVar1;
  FILE *pFVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong local_48;
  char *local_28;
  
  lVar4 = *param_1;
  local_28 = (char *)0x0;
  local_48 = 0;
  puVar5 = *(undefined8 **)(lVar4 + 0x1e8);
  uVar1 = FUN__text__0066fafc(lVar4,*(undefined8 *)(lVar4 + 0x1580),0,&local_28,&local_48,0);
  if ((int)uVar1 == 0) {
    __filename = local_28;
    if (((*local_28 == '/') && (local_28[1] != '\0')) &&
       ((local_28[2] == '|' || (local_28[2] == ':')))) {
      local_28[2] = ':';
      local_48 = local_48 - 1;
      __filename = local_28 + 1;
    }
    if (local_48 != 0) {
      uVar3 = 0;
      do {
        if (__filename[uVar3] == '/') {
          __filename[uVar3] = '\\';
        }
        else if (__filename[uVar3] == '\0') {
          FUN__text__006783e4(local_28);
          return 3;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < local_48);
    }
    pFVar2 = fopen(__filename,(char *)0x7154b5);
    *puVar5 = __filename;
    puVar5[1] = local_28;
    puVar5[2] = pFVar2;
    if (((*(byte *)(lVar4 + 0xf43) >> 1 & 1) == 0) && (pFVar2 == (FILE *)0x0)) {
      FUN__text__0066713c(lVar4,0x710a6e,*(undefined8 *)(lVar4 + 0x1580));
      FUN__text__0067548c(param_1,extraout_x1,0);
      uVar1 = 0x25;
    }
    else {
      uVar1 = 0;
      *param_2 = 1;
    }
  }
  return uVar1;
}


