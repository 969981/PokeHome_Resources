/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00577A70
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00677a70; name: FUN_.text__00677a70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00677a70(long param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = _DAT_008b4668; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = param_1 + (long)param_2 * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(int *)(lVar4 + 0x290) != 2) || // [自动静态注释] 条件判断/分支
     (lVar5 = param_1 + (long)param_2 * 0x18, (*(byte *)(lVar5 + 0x2d0) & 1) != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if ((*(byte *)(_DAT_008b4668 + 0x10) >> 4 & 1) == 0) { // [自动静态注释] 条件判断/分支
    return 4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  param_1 = param_1 + (long)param_2 * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(undefined8 *)(lVar4 + 0x290); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(undefined8 *)(lVar4 + 0x298); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar4 + 0x290) = 0;
  *(undefined8 *)(lVar4 + 0x298) = 0;
  __s = *(void **)(param_1 + 0x2c8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar5 + 0x2c0) = uVar3;
  *(undefined8 *)(lVar5 + 0x2c8) = uVar1;
  uVar3 = *(undefined8 *)(lVar4 + 0x2a0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar4 + 0x2a0) = 0;
  *(undefined8 *)(lVar5 + 0x2d0) = uVar3;
  memset(__s,0,*(size_t *)(lVar2 + 0x18)); // [自动静态注释] 内存复制、清零或移动
  *(void **)(param_1 + 0x298) = __s;
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


