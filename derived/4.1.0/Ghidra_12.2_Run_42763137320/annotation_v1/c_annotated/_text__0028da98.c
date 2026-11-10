/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0018DA98
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028da98; name: FUN_.text__0028da98
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0028da98(long *param_1,uint *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar7 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = (**(code **)(lVar7 + 0x890))(lVar7 + 0x8b0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar4 & 1) == 0) { // [自动静态注释] 条件判断/分支
    *(uint *)(lVar7 + 0x884) = uVar1;
    lVar5 = FUN__text__003c79c0(*(undefined8 *)(lVar7 + 0x2d0),0x730b28); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
    lVar7 = FUN__text__003c79c0(*(undefined8 *)(lVar7 + 0x2d0),0x730b30); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(uint *)(lVar7 + 0x87c) = uVar1;
  iVar3 = FUN__text__0015ab30(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(lVar7 + 0x880) =
       *(undefined4 *)(_DAT_008a1760 + (long)iVar3 * 0x2c + (ulong)uVar1 * 4);
  FUN__text__00286ad0(lVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00285880(lVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(int *)(lVar7 + 0x878) != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(lVar7 + 0x878) = 0;
    FUN__text__002862c4(lVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar3 = *(int *)(lVar7 + 0x878); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = FUN__text__003c79c0(*(undefined8 *)(lVar7 + 0x2d0),0x7307d0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe | iVar3 == 0;
    iVar3 = *(int *)(lVar7 + 0x878); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = FUN__text__003c79c0(*(undefined8 *)(lVar7 + 0x2d0),0x7307d8); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe | iVar3 == 1;
    *(undefined1 *)(lVar7 + 0x97a) = 0;
    bVar2 = *(int *)(lVar7 + 0x878) != 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = FUN__text__0012cb14(lVar7 + 0x110,0x7305f0); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003a14e8(uVar6,bVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar6 = FUN__text__0012cb14(lVar7 + 0x110,0x7305f8); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003a14e8(uVar6,bVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00286570(lVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  local_18 = 0x431e769ffc1ad350; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = FUN__text__0012ce7c(lVar7 + 0x110,&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003a14e8(uVar6,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00128ec0(lVar7,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(lVar7 + 0x4e0) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__003c02e4(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


