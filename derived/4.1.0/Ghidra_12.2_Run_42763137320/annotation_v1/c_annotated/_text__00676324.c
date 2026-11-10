/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00576324
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00676324; name: FUN_.text__00676324
 */


void FUN__text__00676324(uint *param_1,void *param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = uVar2 + param_3 & 0x1fffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = (ulong)uVar2 & 0x3f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 < uVar2) { // [自动静态注释] 条件判断/分支
    uVar3 = uVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = uVar1;
  param_1[1] = uVar3 + (param_3 >> 0x1d); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((int)uVar4 != 0) { // [自动静态注释] 条件判断/分支
    __n = 0x40 - uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_3 < __n) { // [自动静态注释] 条件判断/分支
      param_1 = (uint *)((long)param_1 + uVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__006763dc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    memcpy((void *)((long)(param_1 + 6) + uVar4),param_2,__n); // [自动静态注释] 内存复制、清零或移动
    param_2 = (void *)((long)param_2 + __n); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_3 = param_3 - (int)__n; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__00676714(param_1,param_1 + 6,0x40); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (0x3f < param_3) { // [自动静态注释] 条件判断/分支
    param_2 = (void *)FUN__text__00676714(param_1,param_2,param_3 & 0xffffffc0); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_3 = param_3 & 0x3f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
LAB__text__006763dc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  memcpy(param_1 + 6,param_2,(ulong)param_3); // [自动静态注释] 内存复制、清零或移动
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


