/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00319690; name: FUN_.text__00319690
 */


undefined8 FUN__text__00319690(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  long lVar1;
  char *pcVar2;
  byte bVar3;
  int iVar4;
  size_t sVar5;
  undefined8 extraout_x1;
  size_t __n;
  char *pcVar6;
  undefined8 local_58;
  size_t local_50;
  char *local_48;
  
  sVar5 = 0;
  if (param_3 != (char *)0x0) {
    sVar5 = strlen(param_3);
  }
  iVar4 = FUN__text__0031e240(param_4,param_3,sVar5);
  if (iVar4 != 0) {
    return 0;
  }
  local_58 = (ulong)local_58._4_4_ << 0x20;
  iVar4 = FUN__text__0031c11c(param_2,0x100,extraout_x1,&local_58);
  if (iVar4 != 0) {
    return 0;
  }
  pcVar2 = (char *)(param_1 + 0x2668da0);
  memset(pcVar2,0,10000000);
  if (__n != 0) {
    iVar4 = 0;
    sVar5 = __n;
    pcVar6 = param_2;
    do {
      if (*pcVar6 != '\\') {
        lVar1 = (long)iVar4;
        iVar4 = iVar4 + 1;
        *(char *)(param_1 + lVar1 + 0x2668da0) = *pcVar6;
      }
      sVar5 = sVar5 - 1;
      pcVar6 = pcVar6 + 1;
    } while (sVar5 != 0);
  }
  sVar5 = strlen(pcVar2);
  if (0xffffffffffffffef < sVar5) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00144380(&local_58);
  }
  if (sVar5 < 0x17) {
    local_58 = CONCAT71(local_58._1_7_,(char)((int)sVar5 << 1));
    pcVar6 = (char *)((ulong)&local_58 | 1);
    if (sVar5 == 0) goto LAB__text__003197e4;
  }
  else {
    pcVar6 = operator_new((sVar5 | 0xf) + 1);
    local_58 = (sVar5 | 0xf) + 2;
    local_50 = sVar5;
    local_48 = pcVar6;
  }
  memcpy(pcVar6,pcVar2,sVar5);
LAB__text__003197e4:
  pcVar6[sVar5] = '\0';
  pcVar2 = (char *)((ulong)&local_58 | 1);
  if ((local_58 & 1) != 0) {
    pcVar2 = local_48;
  }
  bVar3 = (byte)local_58;
  if (*pcVar2 == '\"') {
    sVar5 = (ulong)((byte)local_58 >> 1);
    if ((local_58 & 1) != 0) {
      sVar5 = local_50;
    }
    std::string::erase((ulong)&local_58,(ulong)(pcVar2 + ~(ulong)pcVar2 + sVar5));
    std::string::erase((ulong)&local_58,0);
    bVar3 = (byte)local_58;
  }
  pcVar6 = local_48;
  memset(param_2,0,__n);
  sVar5 = (ulong)(bVar3 >> 1);
  pcVar2 = (char *)((ulong)&local_58 | 1);
  if ((bVar3 & 1) != 0) {
    sVar5 = local_50;
    pcVar2 = pcVar6;
  }
  memcpy(param_2,pcVar2,sVar5);
  if ((bVar3 & 1) != 0) {
    operator_delete(pcVar6);
  }
  return 1;
}


