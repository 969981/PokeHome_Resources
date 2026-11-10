/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00539028
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00639028; name: FUN_.text__00639028
 */


void FUN__text__00639028(undefined8 *param_1,long *param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  void *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_64; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_5c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_5a; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_52; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_4c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_46; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x148,4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = uVar2 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar2 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
  memset(__s,0,0x148); // [自动静态注释] 内存复制、清零或移动
  param_1[2] = 0x148; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = *(long *)(uVar2 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = __s;
  param_1[1] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar2 + 0x98) = lVar1 + -1;
  memset(__s,0,0x148); // [自动静态注释] 内存复制、清零或移动
  local_90 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_80 = 0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_78 = 0x3ffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = 0x402; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_64 = 0xffff00ff00010000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_88 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_5c = 0x1ff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70 = 0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_4c = 0xffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_46 = 0x1000100; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_5a = 0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_52 = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00639150(&local_90,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006399a0(__s,&local_90); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


