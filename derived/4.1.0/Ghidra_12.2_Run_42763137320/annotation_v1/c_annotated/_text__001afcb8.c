/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000AFCB8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001afcb8; name: FUN_.text__001afcb8
 */


void FUN__text__001afcb8(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x2d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = param_2 & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__003c7c60(lVar2,param_1 + 0x48,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c7c60(lVar2,param_1 + 0x50,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c7c60(lVar2,param_1 + 0x58,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c7c60(lVar2,param_1 + 0x60,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c7c60(lVar2,param_1 + 0x168,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c7c60(lVar2,param_1 + 0x170,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c7c60(lVar2,param_1 + 0x178,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c7c60(lVar2,param_1 + 0x180,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c7c60(lVar2,param_1 + 0x188,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c7c60(lVar2,param_1 + 400,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c7c60(lVar2,param_1 + 0x198,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c7c60(lVar2,param_1 + 0x1a0,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c7c60(lVar2,param_1 + 0x1a8,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c7c60(lVar2,param_1 + 0x1b0,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c7c60(lVar2,param_1 + 0x1b8,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c7c60(lVar2,param_1 + 0x4e8,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c7c60(lVar2,param_1 + 0x1d0,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003c7c60(lVar2,0x725d88,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((param_2 & 1) == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__0012c97c(0x40000000,*(long *)(param_1 + 8) + 0x110,param_1 + 0x1c8); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003c7c60(lVar2,param_1 + 0x1c0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x001afe54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


