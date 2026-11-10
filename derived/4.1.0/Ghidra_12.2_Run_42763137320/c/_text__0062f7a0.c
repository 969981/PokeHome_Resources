/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0062f7a0; name: FUN_.text__0062f7a0
 */


undefined8 FUN__text__0062f7a0(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_2f8;
  undefined1 auStack_2f0 [8];
  undefined1 auStack_2e8 [8];
  long local_2e0;
  undefined1 auStack_2d6 [662];
  undefined8 local_28;
  
  memset(auStack_2d6,0,0x296);
  FUN__text__006303f4(auStack_2d6,param_1);
  FUN__text__0060e784(auStack_2e8,auStack_2d6);
  uVar2 = FUN__text__0060e7f8(auStack_2e8);
  pcVar1 = (char *)(local_2e0 + 0xd8);
  uVar3 = FUN__text__0060e994(auStack_2e8,pcVar1);
  while ((uVar3 & 1) != 0) {
    if (*pcVar1 == '\a') goto LAB__text__0062f958;
    pcVar1 = pcVar1 + (ulong)*(ushort *)(pcVar1 + 1) + 3;
    uVar3 = FUN__text__0060e994(auStack_2e8,pcVar1);
  }
  pcVar1 = (char *)(local_2e0 + 0xd8);
  uVar3 = FUN__text__0060e994(auStack_2e8,pcVar1);
  while ((uVar3 & 1) != 0) {
    if (*pcVar1 == '\x05') {
      pcVar1 = (char *)(local_2e0 + 0xd8);
      uVar3 = FUN__text__0060e994(auStack_2e8,pcVar1);
      goto joined_r0x0062f894;
    }
    pcVar1 = pcVar1 + (ulong)*(ushort *)(pcVar1 + 1) + 3;
    uVar3 = FUN__text__0060e994(auStack_2e8,pcVar1);
  }
LAB__text__0062f878:
  uVar2 = 0;
  goto LAB__text__0062f95c;
joined_r0x0062f894:
  if ((uVar3 & 1) == 0) goto LAB__text__0062f8c8;
  if (*pcVar1 == '\a') goto LAB__text__0062f878;
  pcVar1 = pcVar1 + (ulong)*(ushort *)(pcVar1 + 1) + 3;
  uVar3 = FUN__text__0060e994(auStack_2e8,pcVar1);
  goto joined_r0x0062f894;
LAB__text__0062f8c8:
  FUN__text__0060e8b0(auStack_2e8,auStack_2f0,&local_2f8,7,0x40);
  pcVar1 = (char *)(local_2e0 + 0xd8);
  uVar3 = FUN__text__0060e994(auStack_2e8,pcVar1);
  while ((uVar3 & 1) != 0) {
    if (*pcVar1 == '\x05') {
      (*(code *)*param_2)(param_2 + 4,&local_28,pcVar1 + 3,uVar2);
      break;
    }
    pcVar1 = pcVar1 + (ulong)*(ushort *)(pcVar1 + 1) + 3;
    uVar3 = FUN__text__0060e994(auStack_2e8,pcVar1);
  }
  FUN__text__00630654(param_1,auStack_2d6);
LAB__text__0062f958:
  uVar2 = 1;
LAB__text__0062f95c:
  FUN__text__0060e79c(auStack_2e8);
  return uVar2;
}


