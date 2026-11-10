/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0005DD04
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015dd04; name: FUN_.text__0015dd04
 */


undefined8 FUN__text__0015dd04(long param_1,undefined2 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  cVar1 = FUN__text__0015a4f0(*param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  cVar2 = FUN__text__0015a500(*param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (cVar1 == -0x42) { // [自动静态注释] 条件判断/分支
    if (cVar2 == '\x05') { // [自动静态注释] 条件判断/分支
      plVar3 = *(long **)(param_1 + 400); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar3 == (long *)0x0) { // [自动静态注释] 条件判断/分支
        return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3,param_2[4]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uVar4 & 1) != 0) { // [自动静态注释] 条件判断/分支
        *(undefined1 *)(param_1 + 0x198) = 1;
        *(undefined2 *)(param_1 + 0x19a) = param_2[4];
        return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else if (cVar2 == '\x02') { // [自动静态注释] 条件判断/分支
      *(uint *)(param_1 + 0x188) = (uint)(ushort)param_2[4];
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


