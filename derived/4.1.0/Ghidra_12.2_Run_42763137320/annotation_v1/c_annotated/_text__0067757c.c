/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0057757C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067757c; name: FUN_.text__0067757c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__0067757c(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t sVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((DAT_00c5f61c & 1) == 0) { // [自动静态注释] 条件判断/分支
    DAT_00c5f61d._0_7_ = _DAT_00721408; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    DAT_00c5f61d._7_1_ = DAT_0072140f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uRam0000000000c5f625 = uRam0000000000721410; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    sVar2 = strlen((char *)&DAT_00c5f61d); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar6 = (undefined1 *)((long)&DAT_00c5f61d + sVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = 200 - sVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((1 < uVar5) && (lVar3 = FUN__text__00677db0(sVar2 + 0xc5f61e,199 - sVar2), lVar3 != 0)) { // [自动静态注释] 条件判断/分支
      *puVar6 = 0x20;
      uVar5 = uVar5 - (lVar3 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar6 = puVar6 + lVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar4 = FUN__text__006891e0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar1 = FUN__text__006599c0(puVar6,uVar5,0x70dfc6,uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00661a24(puVar6 + iVar1,uVar5 - (long)iVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    DAT_00c5f61c = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return &DAT_00c5f61d; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


