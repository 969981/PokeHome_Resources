/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006792b4; name: FUN_.text__006792b4
 */


uint FUN__text__006792b4(undefined8 param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  void *pvVar5;
  size_t __n;
  size_t __n_00;
  void *__dest;
  ulong uVar6;
  ulong uVar7;
  char *__s;
  ulong local_78;
  int local_6c;
  undefined8 local_68;
  
  local_68 = 0;
  local_6c = 0;
  uVar4 = nn::fs::GetEntryType((DirectoryEntryType *)&local_6c,param_2);
  if (uVar4 != 0) {
LAB__text__006792f0:
    return uVar4 & 0x3fffff;
  }
  if (local_6c != 0) {
    return 0;
  }
  uVar4 = nn::fs::OpenDirectory((DirectoryHandle *)&local_68,param_2,2);
  if (uVar4 != 0) goto LAB__text__006792f0;
  local_78 = 0;
  uVar4 = nn::fs::GetDirectoryEntryCount(&local_78,local_68);
  uVar6 = local_78;
  if (uVar4 == 0) {
    if (0 < (long)local_78) {
      uVar7 = local_78 * 0x310;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_78;
      if (SUB168(auVar3 * ZEXT816(0x310),8) != 0) {
        uVar7 = 0xffffffffffffffff;
      }
      pvVar5 = operator_new__(uVar7);
      uVar4 = nn::fs::ReadDirectory(&local_78,pvVar5,local_68,uVar6);
      if (uVar4 != 0) goto LAB__text__00679350;
      if (0 < (long)local_78) {
        uVar6 = 0;
        uVar7 = 1;
        do {
          __n = strlen(param_2);
          cVar2 = param_2[__n - 1];
          uVar4 = 0;
          if (cVar2 != '/') {
            uVar4 = (uint)(cVar2 != '\\');
          }
          __s = (char *)((long)pvVar5 + uVar6 * 0x310);
          __n_00 = strlen(__s);
          __dest = operator_new__(__n + 1 + __n_00 + (ulong)uVar4);
          memcpy(__dest,param_2,__n);
          if ((cVar2 != '/') && (cVar2 != '\\')) {
            *(undefined1 *)((long)__dest + __n) = 0x5c;
            __n = __n + 1;
          }
          memcpy((void *)((long)__dest + __n),__s,__n_00);
          *(undefined1 *)((long)__dest + __n + __n_00) = 0;
          uVar4 = FUN__text__00679224(param_1,__dest);
          uVar6 = nnResultIsFailure(uVar4);
          operator_delete__(__dest);
          if ((uVar6 & 1) != 0) break;
          uVar4 = 0;
          bVar1 = (long)uVar7 < (long)local_78;
          uVar6 = uVar7;
          uVar7 = (ulong)((int)uVar7 + 1);
        } while (bVar1);
        goto LAB__text__00679354;
      }
    }
    uVar4 = 0;
  }
  else {
LAB__text__00679350:
    uVar4 = uVar4 & 0x3fffff;
  }
LAB__text__00679354:
  nn::fs::CloseDirectory(local_68);
  return uVar4;
}


