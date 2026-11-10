/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F2BC0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f2bc0; name: FUN_.text__005f2bc0
 */


void FUN__text__005f2bc0(long param_1,ushort *param_2,int param_3,int param_4,undefined8 param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__005f3254(param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005f33f0(param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(int *)(*(long *)(param_1 + 0x90) + 8) == 0) { // [自动静态注释] 条件判断/分支
    if (param_3 != 0) { // [自动静态注释] 条件判断/分支
      uVar2 = param_4 * 0x2983 + 0x7c89; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        uVar1 = FUN__text__005f335c(param_5,*param_2 ^ uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((uVar1 & 1) == 0) goto LAB__text__005f2c80; // [自动静态注释] 条件判断/分支
        param_2 = param_2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar2 = uVar2 >> 0xd & 7 | uVar2 << 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        param_3 = param_3 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (param_3 != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    for (; param_3 != 0; param_3 = param_3 + -1) { // [自动静态注释] 循环/迭代
      uVar1 = FUN__text__005f335c(param_5,*param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((uVar1 & 1) == 0) { // [自动静态注释] 条件判断/分支
LAB__text__005f2c80: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        FUN__text__005f33f0(param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      param_2 = param_2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f33c0(param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


