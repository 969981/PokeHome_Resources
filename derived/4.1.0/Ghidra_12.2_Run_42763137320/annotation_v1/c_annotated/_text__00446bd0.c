/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00346BD0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00446bd0; name: FUN_.text__00446bd0
 */


void FUN__text__00446bd0(long param_1,undefined4 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = *(long *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2 = *(long **)(lVar1 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar2 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      lVar1 = plVar2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_38 = 0x400000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar1 + 0x330) = param_2;
      FUN__text__0047469c(lVar1,&local_38,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      plVar2 = (long *)*plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar2 != (long *)0x0); // [自动静态注释] 循环/迭代
    lVar1 = *(long *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  for (plVar2 = *(long **)(lVar1 + 0x70); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) { // [自动静态注释] 循环/迭代
    FUN__text__004b6e90(DAT_00ae9a40,plVar2[2]); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


