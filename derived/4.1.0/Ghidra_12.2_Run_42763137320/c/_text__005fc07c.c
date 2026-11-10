/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fc07c; name: FUN_.text__005fc07c
 */


uint FUN__text__005fc07c(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 local_2e8 [2];
  undefined2 local_2e6;
  undefined2 local_2e4;
  undefined2 local_2e2;
  undefined2 local_2e0;
  undefined2 local_2de;
  undefined2 local_2dc;
  undefined2 local_2da;
  undefined1 auStack_2d6 [662];
  
  memset(auStack_2d6,0,0x296);
  FUN__text__00631194(param_2,auStack_2d6);
  FUN__text__00604e94(auStack_2d6,1);
  uVar1 = FUN__text__00632ee0(param_2);
  local_2e8[0] = FUN__text__00632408(param_2);
  local_2e6 = FUN__text__006347b0(param_2,0);
  local_2e4 = FUN__text__006347b0(param_2,1);
  local_2e2 = FUN__text__006347b0(param_2,2);
  local_2e0 = FUN__text__006347b0(param_2,5);
  local_2de = FUN__text__006347b0(param_2,3);
  local_2dc = FUN__text__006347b0(param_2,4);
  local_2da = FUN__text__00634d48(param_2);
  FUN__text__006331e0(param_2,uVar1 & 1);
  uVar1 = FUN__text__00604704(param_1,param_1 + 0xe8,auStack_2d6,local_2e8);
  return uVar1 & 1;
}


