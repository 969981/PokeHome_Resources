/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015dd04; name: FUN_.text__0015dd04
 */


undefined8 FUN__text__0015dd04(long param_1,undefined2 *param_2)

{
  char cVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  
  cVar1 = FUN__text__0015a4f0(*param_2);
  cVar2 = FUN__text__0015a500(*param_2);
  if (cVar1 == -0x42) {
    if (cVar2 == '\x05') {
      plVar3 = *(long **)(param_1 + 400);
      if (plVar3 == (long *)0x0) {
        return 1;
      }
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3,param_2[4]);
      if ((uVar4 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x198) = 1;
        *(undefined2 *)(param_1 + 0x19a) = param_2[4];
        return 1;
      }
    }
    else if (cVar2 == '\x02') {
      *(uint *)(param_1 + 0x188) = (uint)(ushort)param_2[4];
      return 1;
    }
  }
  return 0;
}


