/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0030E7C0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040e7c0; name: FUN_.text__0040e7c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0040e7c0(undefined4 param_1,undefined4 param_2,ushort param_3,ushort param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (DAT_00ae9ab0 == '\0') { // [自动静态注释] 条件判断/分支
    return 0x66; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar5 = FUN__text__004af6c0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar4 = _DAT_008a45c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar6 = FUN__text__004b0170(*_DAT_008a45c0,7,uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(lVar6 + 4) = param_1;
  *(undefined4 *)(lVar6 + 8) = param_2;
  *(ushort *)(lVar6 + 0xc) = param_3 & 1;
  *(ushort *)(lVar6 + 0xe) = param_4 & 1;
  piVar1 = (int *)(*plVar4 + 0xd4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar3) { // [自动静态注释] 条件判断/分支
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


