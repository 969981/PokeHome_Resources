/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f45f0; name: FUN_.text__005f45f0
 */


undefined8 FUN__text__005f45f0(long *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 local_34;
  
  if (*(int *)((long)param_1 + 0x114) == 0) {
    *(undefined4 *)((long)param_1 + 0x114) = 1;
    cVar1 = *(char *)((long)param_1 + 0xba);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0xba);
  }
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x15) = 1;
    *(undefined4 *)((long)param_1 + 0x114) = 1;
    return 4;
  }
  cVar1 = *(char *)((long)param_1 + 0x9e);
  *(char *)((long)param_1 + 0x9e) = cVar1 + '\x01';
  if ((byte)(cVar1 + 1U) <= *(byte *)((long)param_1 + 0x9d)) {
    return 1;
  }
  *(undefined1 *)((long)param_1 + 0x9e) = 0;
  uVar2 = FUN__text__005f4cc0(param_1,&local_34);
  if (*(char *)((long)param_1 + 0xb9) == '\0') {
    (**(code **)(*param_1 + 0x58))
              (param_1,uVar2,
               *(undefined8 *)(param_1[0xb] + (ulong)*(byte *)((long)param_1 + 0x9f) * 0xa0));
    (**(code **)(*param_1 + 0x60))
              (param_1,uVar2,
               *(undefined8 *)(param_1[0xb] + (ulong)*(byte *)((long)param_1 + 0x9f) * 0xa0),
               local_34);
    if ((char)param_1[0x17] == '\0') {
      return 1;
    }
  }
  else {
    param_1[0x20] = param_1[0x1b];
    param_1[0x21] = param_1[0x1c];
    param_1[0x1d] = param_1[0x18];
    param_1[0x1e] = param_1[0x19];
    param_1[0x1f] = param_1[0x1a];
    if ((*(ushort *)(param_1 + 0x1d) & 0xfffe) == 0xbe00) {
      uVar5 = 2;
      *(char *)((long)param_1 + 0x9b) = *(char *)((long)param_1 + 0x9b) + '\x01';
      *(char *)((long)param_1 + 0x9c) = *(char *)((long)param_1 + 0x9c) + '\x01';
      goto LAB__text__005f4784;
    }
    plVar3 = *(long **)(param_1[0xb] + (ulong)*(byte *)((long)param_1 + 0x9f) * 0xa0);
    (**(code **)(*plVar3 + 0x158))(plVar3,uVar2,0,local_34);
    if ((char)param_1[0x17] == '\0') {
      uVar4 = (**(code **)(*param_1 + 0x88))(param_1,param_1 + 0x1d);
      if ((uVar4 & 1) == 0) {
        uVar5 = 2;
      }
      else {
        uVar5 = 1;
      }
      *param_2 = uVar5;
      return 1;
    }
  }
  uVar5 = 6;
LAB__text__005f4784:
  *param_2 = 1;
  *(undefined4 *)(param_1 + 0x15) = uVar5;
  *(undefined4 *)((long)param_1 + 0x114) = 1;
  return 1;
}


