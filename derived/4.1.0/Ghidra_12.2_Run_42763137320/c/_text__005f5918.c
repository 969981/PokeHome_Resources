/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f5918; name: FUN_.text__005f5918
 */


void FUN__text__005f5918(ulong *param_1,ulong param_2,uint param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  
  *(undefined8 *)((long)param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0xd) = 0x300;
  bVar3 = 2;
  if ((param_3 & 1) == 0) {
    bVar3 = 0;
  }
  *(undefined8 *)((long)param_1 + 0x17) = 0;
  bVar4 = 4;
  if ((param_4 & 1) == 0) {
    bVar4 = 0;
  }
  *(undefined1 *)((long)param_1 + 0x1f) = 0;
  lVar1 = param_2 + 0x10;
  *param_1 = param_2;
  *(byte *)((long)param_1 + 0xc) = bVar4 | bVar3;
  lVar2 = param_2 + 0x18;
  if (param_2 < 0x11) {
    lVar1 = 0x20;
    lVar2 = 0x28;
  }
  *(long *)((long)param_1 + lVar1) = lVar2;
  return;
}


