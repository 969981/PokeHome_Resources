/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000001D0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001001d0; name: FUN_.text__001001d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__001001d0(undefined8 param_1,undefined8 param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((param_3 != 0) && // [自动静态注释] 条件判断/分支
     (uVar4 = (_DAT_0089f280 - _DAT_0089f278 >> 3) * -0x5555555555555555, DAT_008e1210 < uVar4)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar3 = DAT_008e1210; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      cVar1 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar2 = (bool)ExclusiveMonitorPass(0x8e1210,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar2) { // [自动静态注释] 条件判断/分支
        cVar1 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        DAT_008e1210 = DAT_008e1210 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } while (cVar1 != '\0'); // [自动静态注释] 循环/迭代
    if (uVar3 < uVar4) { // [自动静态注释] 条件判断/分支
      puVar5 = (undefined8 *)(_DAT_0089f278 + uVar3 * 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar5[2] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar5 = param_1;
      puVar5[1] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0xffffffff; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


