/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0042BE78
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052be78; name: FUN_.text__0052be78
 */


void FUN__text__0052be78(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_1 + 0x29) == '\0') { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x38) = 0;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = *(uint *)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 < 2) { // [自动静态注释] 条件判断/分支
    if ((*(int *)(param_1 + 0x3c) == 0) && // [自动静态注释] 条件判断/分支
       (uVar2 = FUN__text__00530820((undefined8 *)(param_1 + 0x30),1), (uVar2 & 1) == 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if ((uVar1 == 0) && (puVar3 = *(undefined4 **)(param_1 + 0x30), puVar3 != (undefined4 *)0x0)) { // [自动静态注释] 条件判断/分支
      *puVar3 = 0;
      memset(puVar3 + 2,0,0x108); // [自动静态注释] 内存复制、清零或移动
      puVar3[0x44] = 0x42c80000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(puVar3 + 0x4e) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x52) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x54) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x56) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x5a) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x5c) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x5e) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x62) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 100) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x66) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x6a) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x6c) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x45) = 0;
      *(undefined8 *)(puVar3 + 0x47) = 0;
      *(undefined8 *)(puVar3 + 0x49) = 0;
      *(undefined8 *)(puVar3 + 0x4b) = 0;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x38) = 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


