/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00656948; name: FUN_.text__00656948
 */


char * FUN__text__00656948(int param_1,undefined1 *param_2,char *param_3,ulong param_4)

{
  size_t sVar1;
  int *piVar2;
  int iVar3;
  char local_30 [16];
  
  if (param_1 == 2) {
    local_30[0] = '\0';
    local_30[1] = '\0';
    local_30[2] = '\0';
    local_30[3] = '\0';
    local_30[4] = '\0';
    local_30[5] = '\0';
    local_30[6] = '\0';
    local_30[7] = '\0';
    local_30[8] = '\0';
    local_30[9] = '\0';
    local_30[10] = '\0';
    local_30[0xb] = '\0';
    local_30[0xc] = '\0';
    local_30[0xd] = '\0';
    local_30[0xe] = '\0';
    local_30[0xf] = '\0';
    FUN__text__006599c0(local_30,0x10,0x7180dc,*param_2,param_2[1],param_2[2],param_2[3]);
    sVar1 = strlen(local_30);
    if ((sVar1 != 0) && (sVar1 < param_4)) {
      strcpy(param_3,local_30);
      return param_3;
    }
    piVar2 = __errno_location();
    iVar3 = 0x1c;
  }
  else {
    piVar2 = __errno_location();
    iVar3 = 0x61;
  }
  *piVar2 = iVar3;
  return (char *)0x0;
}


