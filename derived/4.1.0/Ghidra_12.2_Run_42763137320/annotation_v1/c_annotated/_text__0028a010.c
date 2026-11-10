/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0018A010
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028a010; name: FUN_.text__0028a010
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0028a010(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short *psVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__003d17a0(param_1 + 0x990); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003d17a0(param_1 + 0xff0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(char *)(param_1 + 0x1650) != '\0') { // [自动静态注释] 条件判断/分支
    psVar6 = (short *)FUN__text__0027a640(*(undefined8 *)(param_1 + 0x640), // [自动静态注释] 调用尚未恢复正式名称的函数
                                          *(undefined4 *)(param_1 + 0x970),
                                          *(undefined4 *)(param_1 + 0x974),
                                          *(undefined1 *)(param_1 + 0x978),
                                          *(undefined1 *)(param_1 + 0x979));
    sVar2 = *psVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    cVar1 = *(char *)((long)psVar6 + 5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar10 = (uint)*(byte *)(psVar6 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (sVar2 == 0x365) { // [自动静态注释] 条件判断/分支
      uVar11 = uVar10 * 0x25 >> 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar11 = uVar11 + ((uVar10 - uVar11 & 0xfe) >> 1) >> 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar8 = FUN__text__0016b970(sVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar11 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uVar8 & 1) == 0) { // [自动静态注释] 条件判断/分支
        uVar11 = uVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    iVar5 = *(int *)(param_1 + 0x970); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar4 = FUN__text__0028f1c0(param_1,sVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar7 = *(long *)(param_1 + 0x640); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(int *)(lVar7 + 0x130) == 1) { // [自动静态注释] 条件判断/分支
      uVar8 = FUN__text__0028f1a4(param_1,*(undefined1 *)(lVar7 + 0x92954), // [自动静态注释] 调用尚未恢复正式名称的函数
                                  *(undefined4 *)(lVar7 + 0x92958),
                                  *(undefined1 *)(lVar7 + iVar5 + 0x92968),sVar2);
      lVar7 = *(long *)(param_1 + 0x640); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar4 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uVar8 & 1) == 0) { // [自动静态注释] 条件判断/分支
        iVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    iVar5 = FUN__text__0027a5c0(lVar7,*(undefined4 *)(param_1 + 0x970)); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((iVar4 == 2) && (0 < iVar5)) { // [自动静态注释] 条件判断/分支
      FUN__text__00205bf0(sVar2,uVar11,0,(ulong)(cVar1 != '\0') << 1); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(char *)(param_1 + 0x1650) = '\0';
  } // [自动静态注释] 作用域/控制流边界
  if ((-1 < *(int *)(param_1 + 0x884)) && // [自动静态注释] 条件判断/分支
     (uVar8 = (**(code **)(param_1 + 0x890))(param_1 + 0x8b0), (uVar8 & 1) != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar10 = *(uint *)(param_1 + 0x884); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(param_1 + 0x87c) = uVar10;
    iVar4 = FUN__text__0015ab30(); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(param_1 + 0x880) =
         *(undefined4 *)(_DAT_008a1760 + (long)iVar4 * 0x2c + (ulong)uVar10 * 4);
    FUN__text__00286ad0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00285880(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(int *)(param_1 + 0x878) != 0) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(param_1 + 0x878) = 0;
      FUN__text__002862c4(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      iVar4 = *(int *)(param_1 + 0x878); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar7 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x7307d0); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | iVar4 == 0;
      iVar4 = *(int *)(param_1 + 0x878); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar7 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x7307d8); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | iVar4 == 1;
      *(undefined1 *)(param_1 + 0x97a) = 0;
      bVar3 = *(int *)(param_1 + 0x878) != 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar9 = FUN__text__0012cb14(param_1 + 0x110,0x7305f0); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__003a14e8(uVar9,bVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar9 = FUN__text__0012cb14(param_1 + 0x110,0x7305f8); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__003a14e8(uVar9,bVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00286570(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    local_38 = 0x431e769ffc1ad350; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = FUN__text__0012ce7c(param_1 + 0x110,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003a14e8(uVar9,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00128ec0(param_1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(long *)(param_1 + 0x4e0) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__003c02e4(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(param_1 + 0x884) = 0xffffffff;
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


