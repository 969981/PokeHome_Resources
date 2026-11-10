/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B1770
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b1770; name: FUN_.text__006b1770
 */


void FUN__text__006b1770(long param_1,undefined8 param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = nn::util::BinaryFileHeader::GetFirstBlock(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(uint *)(lVar2 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0 < (int)uVar1) { // [自动静态注释] 条件判断/分支
    uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((param_3 & 1) == 0) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        uVar3 = FUN__text__006f4a90(*(long *)(param_1 + 0x10) + uVar6 * 0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__006f4e04(*(long *)(param_1 + 0x10) + uVar6 * 0x20,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__006a0f24(uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
        lVar2 = nn::util::BinaryFileHeader::GetFirstBlock(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar2 = *(long *)(lVar2 + 0x20) + uVar6 * 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar4 = FUN__text__006c1720(*(undefined8 *) // [自动静态注释] 调用尚未恢复正式名称的函数
                                     (lVar2 + *(long *)(((ulong)*(uint *)(param_1 + 8) & 7) * 8 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                                       0x8b4560))); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if ((uVar4 & 1) != 0) { // [自动静态注释] 条件判断/分支
          FUN__text__006f3ea4(*(undefined8 *) // [自动静态注释] 调用尚未恢复正式名称的函数
                               (*(long *)(lVar2 + *(long *)(((ulong)*(uint *)(param_1 + 8) & 7) * 8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                                           + 0x8b4560)) + 0x68),param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        uVar6 = uVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar6 != uVar1); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      do { // [自动静态注释] 循环/迭代
        uVar3 = FUN__text__006f4a90(*(long *)(param_1 + 0x10) + uVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__006f4e04(*(long *)(param_1 + 0x10) + uVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__006a0f24(uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar6 = uVar6 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while ((ulong)uVar1 * 0x20 != uVar6); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if ((param_3 & 1) == 0) { // [自动静态注释] 条件判断/分支
    uVar3 = nn::util::BinaryFileHeader::GetFirstBlock(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = FUN__text__006c16f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar6 & 1) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__006f3138(uVar3,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    uVar6 = nn::util::BinaryFileHeader::IsRelocated(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar6 & 1) != 0) { // [自动静态注释] 条件判断/分支
      nn::util::BinaryFileHeader::GetRelocationTable(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      nn::util::RelocationTable::Unrelocate(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = *(long *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = nn::util::BinaryFileHeader::GetFirstBlock(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    uVar6 = (ulong)*(uint *)(lVar2 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (0 < (int)*(uint *)(lVar2 + 0x1c)) { // [自动静态注释] 条件判断/分支
      lVar2 = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        FUN__text__006f4a80(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar6 = uVar6 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar2 = lVar2 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar6 != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__006a0f24(lVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006a0f24(*(undefined8 *)(param_1 + 0x18)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(param_1 + 0x20) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006a0f24(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006a0f24(*(undefined8 *)(param_1 + 0x28)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006a0f24(*(undefined8 *)(param_1 + 0x30)); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


