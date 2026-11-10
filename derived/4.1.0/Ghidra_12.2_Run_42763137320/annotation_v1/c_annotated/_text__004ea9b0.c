/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003EA9B0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ea9b0; name: FUN_.text__004ea9b0
 */


void FUN__text__004ea9b0(long param_1,long param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_180 [264]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_78 [3]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__004f6114(auStack_180,*(undefined8 *)(param_1 + 0x10),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_78[0] != 0) { // [自动静态注释] 条件判断/分支
    uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      FUN__text__004f66c0(*(undefined4 *)(param_1 + 0x4c),auStack_180,param_2,param_3,uVar1 & 0x7f00 // [自动静态注释] 调用尚未恢复正式名称的函数
                          ,*(undefined4 *)(param_1 + 0x2c)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (local_58 != '\0') break; // [自动静态注释] 条件判断/分支
      lVar3 = FUN__text__004f6970(auStack_180,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar3 = FUN__text__004f52d4(local_78,param_2 - lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar2 = local_60 - lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar2 == 0 || local_60 < lVar3) { // [自动静态注释] 条件判断/分支
        uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if (param_3 <= uVar2) break; // [自动静态注释] 条件判断/分支
      (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))(*(long **)(param_1 + 0x10),auStack_180,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } while (local_78[0] != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004f6174(auStack_180); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


