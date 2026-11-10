/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0057C120
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067c120; name: FUN_.text__0067c120
 */


ulong FUN__text__0067c120(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    uVar1 = FUN__text__0067b2b4(param_1,&local_28,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((long)uVar1 < 1) { // [自动静态注释] 条件判断/分支
LAB__text__0067c1b4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return uVar1 & 0xffffffff; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    lVar2 = (**(code **)(param_1 + 0x7d8)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      (param_1,local_28,uVar1,0,*(undefined8 *)(param_1 + 0x8b8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (lVar2 < 0) { // [自动静态注释] 条件判断/分支
      if (lVar2 == -0x1f8) { // [自动静态注释] 条件判断/分支
        lVar2 = *(long *)(*(long *)(param_1 + 0x160) + 0x18) - uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long *)(*(long *)(param_1 + 0x160) + 0x18) = lVar2;
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar1 = 0xfffffc7a; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      goto LAB__text__0067c1b4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(ulong *)(*(long *)(param_1 + 0x160) + 0x18) =
         *(long *)(*(long *)(param_1 + 0x160) + 0x18) + (lVar2 - uVar1);
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界


