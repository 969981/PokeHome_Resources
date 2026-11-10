/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005D35C0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d35c0; name: FUN_.text__006d35c0
 */


/* WARNING: Removing unreachable block (ram,0x006d37bc) */
/* WARNING: Removing unreachable block (ram,0x006d3804) */
/* WARNING: Removing unreachable block (ram,0x006d37d0) */
/* WARNING: Removing unreachable block (ram,0x006d3814) */
/* WARNING: Removing unreachable block (ram,0x006d3820) */
/* WARNING: Removing unreachable block (ram,0x006d3844) */
/* WARNING: Removing unreachable block (ram,0x006d37f4) */
/* WARNING: Removing unreachable block (ram,0x006d3834) */
/* WARNING: Removing unreachable block (ram,0x006d3840) */
/* WARNING: Removing unreachable block (ram,0x006d37f8) */

undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__006d35c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                   long param_5,undefined4 param_6,undefined4 param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_90 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_6c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  __n = (ulong)*(uint *)(param_5 + 0x10) * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(uint *)(param_5 + 0x10) != 0) { // [自动静态注释] 条件判断/分支
    local_90[0] = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_78 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_70 = param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_6c = param_7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    memset((void *)((long)local_90 - (__n + 0xf & 0xffffffff0)),0,__n); // [自动静态注释] 内存复制、清零或移动
    uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_80 = param_1 + 0x100; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar1 = **(uint **)(*(long *)(param_5 + 0x18) + uVar3 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar1 < 7) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x006d36bc */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(&UNK__text__006d36c8 + (ulong)*(byte *)((ulong)uVar1 + 0x7666ca) * 4))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      uVar3 = uVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar3 < *(uint *)(param_5 + 0x10)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


